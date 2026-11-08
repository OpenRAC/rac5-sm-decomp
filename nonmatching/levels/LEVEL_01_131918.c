/* LEVEL_01.REL:0x131918: reviewed 108-byte candidate.
 * pinned C with gnu-ee-trial links 108 bytes; first differs at +12.
 * Retry: Recover the callback-list/index live ranges assigning the list to s2 and
 * index to s1, then check indirect-call load order.
 * No matching credit.
 */
typedef struct {
    unsigned int count;
    void (*callbacks[32])(unsigned int);
    unsigned int values[32];
} CallbackList;

void func_131918(CallbackList *list)
{
    unsigned int i = 0;

    if (list->count != 0) {
        unsigned int *value = list->values;
        do {
            void (*callback)(unsigned int) =
                *(void (**)(unsigned int))((char *)value - 0x80);
            callback(*value++);
            ++i;
        } while (i < list->count);
    }
    list->count = 0;
}
