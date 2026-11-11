/* Forward to free. */
extern void free(void *ptr);

void __eh_free(void *ptr)
{
    free(ptr);
}
