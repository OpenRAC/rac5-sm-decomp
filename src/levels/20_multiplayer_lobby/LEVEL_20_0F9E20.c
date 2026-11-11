extern void *func_0FB940(void *, void *);
extern volatile long long *func_0F9D18(unsigned short, void *, int);

typedef struct Input {
    int initial;
    char pad_04[0x298];
    char status[1];
} Input;

void *func_0F9E20(void *context, Input *input, void *key)
{
    char *entry = func_0FB940(context, key);
    unsigned short index;

    if (entry == 0)
        return 0;

    index = *(unsigned short *)(entry + 0x298);
    if (input->status[index] != 0)
        *(int *)entry = (int)*func_0F9D18(index, input, 0);
    else
        *(int *)entry = input->initial;
    *(int *)entry += *(int *)(entry + 8);
    return entry;
}
