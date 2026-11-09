/* FRONTEND.REL:0x0249D8: links 140/140 bytes with pinned C only because the callee's
 * return type points at a volatile 64-bit value, which forces the retail 64-bit load;
 * a volatile qualifier used only to steer code generation is not accepted. Withdrawn
 * after #229. Retry: recover the natural type or access of that 64-bit value.
 * No matching credit.
 */
extern void *func_0264F8(void *, void *);
extern volatile long long *func_0248D0(unsigned short, void *, int);

typedef struct Input {
    int initial;
    char pad_04[0x298];
    char status[1];
} Input;

void *func_0249D8(void *context, Input *input, void *key)
{
    char *entry = func_0264F8(context, key);
    unsigned short index;

    if (entry == 0)
        return 0;

    index = *(unsigned short *)(entry + 0x298);
    if (input->status[index] != 0)
        *(int *)entry = (int)*func_0248D0(index, input, 0);
    else
        *(int *)entry = input->initial;
    *(int *)entry += *(int *)(entry + 8);
    return entry;
}
