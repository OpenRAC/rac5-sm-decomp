extern void *func_201AE8(void *, void *);
extern volatile long long *func_1FFEC0(unsigned short, void *, int);

typedef struct Input {
    int initial;
    char pad_04[0x298];
    char status[1];
} Input;

void *func_1FFFC8(void *context, Input *input, void *key)
{
    char *entry = func_201AE8(context, key);
    unsigned short index;

    if (entry == 0)
        return 0;

    index = *(unsigned short *)(entry + 0x298);
    if (input->status[index] != 0)
        *(int *)entry = (int)*func_1FFEC0(index, input, 0);
    else
        *(int *)entry = input->initial;
    *(int *)entry += *(int *)(entry + 8);
    return entry;
}
