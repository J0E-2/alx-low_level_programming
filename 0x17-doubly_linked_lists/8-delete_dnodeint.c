#include "lists.h"

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
        unsigned int i = 0;
        dlistint_t *ptr;

        if (head == NULL || *head == NULL)
                return (-1);

        ptr = *head;

        while (i < index && ptr != NULL)
        {
                ptr = ptr->next;
                i++;
        }

        if (ptr == NULL)
                return (-1);

        if (ptr == *head)
        {
                *head = ptr->next;
                if (*head != NULL)
                        (*head)->prev = NULL;
        }
        else if (ptr->next == NULL)
        {
                ptr->prev->next = NULL;
        }
        else
        {
                ptr->prev->next = ptr->next;
                ptr->next->prev = ptr->prev;
        }

        free(ptr);
        return (1);
}
