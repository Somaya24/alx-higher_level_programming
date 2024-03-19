#include "lists.h"

int is_palindrome(listint_t **head)
{
    listint_t *slow = *head, *fast = *head, *prev = NULL, *temp;

    if (*head == NULL || (*head)->next == NULL)
        return (1);

    while (fast && fast->next)
    {
        fast = fast->next->next;
        temp = slow->next;
        slow->next = prev;
        prev = slow;
        slow = temp;
    }

    if (fast)
        slow = slow->next;

    while (slow)
    {
        if (slow->n != prev->n)
            return (0);
        slow = slow->next;
        prev = prev->next;
    }
    return (1);
}

