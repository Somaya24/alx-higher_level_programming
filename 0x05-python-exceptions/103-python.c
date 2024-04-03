#include <Python.h>
#include <stdio.h>

/**
 * print_python_list - prints some basic info about Python lists
 * @p: PyObject pointer
 */
void print_python_list(PyObject *p)
{
	Py_ssize_t size, i;
	PyObject *item;

	if (!PyList_Check(p))
	{
		fprintf(stderr, "[ERROR] Invalid List Object\n");
		return;
	}

	size = PyList_Size(p);

	printf("[*] Python list info\n[*] Size of the Python List = %ld\n[*] Allocated = %ld\n", size, ((PyListObject *)p)->allocated);

	for (i = 0; i < size; i++)
	{
		item = PyList_GetItem(p, i);
		printf("Element %ld: %s\n", i, Py_TYPE(item)->tp_name);
		if (PyBytes_Check(item))
			print_python_bytes(item);
	}
}

/**
 * print_python_bytes - prints some basic info about Python bytes
 * @p: PyObject pointer
 */
void print_python_bytes(PyObject *p)
{
	Py_ssize_t size, i;
	char *str;

	if (!PyBytes_Check(p))
	{
		fprintf(stderr, "[ERROR] Invalid Bytes Object\n");
		return;
	}

	size = PyBytes_Size(p);
	str = PyBytes_AsString(p);

	printf("[.] bytes object info\n");
	printf("  size: %ld\n", size);
	printf("  trying string: %s\n", str);

	printf("  first %ld bytes: ", size + 1 < 10 ? size + 1 : 10);
	for (i = 0; i < size + 1 && i < 10; i++)
		printf("%02x%c", (unsigned char)str[i], i + 1 == size ? '\n' : ' ');
}

/**
 * print_python_float - prints some basic info about Python float objects
 * @p: PyObject pointer
 */
void print_python_float(PyObject *p)
{
	if (!PyFloat_Check(p))
	{
		fprintf(stderr, "[ERROR] Invalid Float Object\n");
		return;
	}

	printf("[.] float object info\n");
	printf("  value: %.17g\n", PyFloat_AS_DOUBLE(p));
}

