extern void *func_205E00(void *, void *);
extern volatile long long *func_2041D8(unsigned short, void *, int);

typedef struct Input {
    int initial;
    char pad_04[0x298];
    char status[1];
} Input;

void *func_2042E0(void *context, Input *input, void *key)
{
    char *entry = func_205E00(context, key);
    unsigned short index;

    if (entry == 0)
        return 0;

    index = *(unsigned short *)(entry + 0x298);
    if (input->status[index] != 0)
        *(int *)entry = (int)*func_2041D8(index, input, 0);
    else
        *(int *)entry = input->initial;
    *(int *)entry += *(int *)(entry + 8);
    return entry;
}
