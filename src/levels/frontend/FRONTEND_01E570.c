/* FRONTEND:0x01E570 -- releases the object returned by the allocator. */
extern int *func_01E380(unsigned int value);
extern void func_002900(int);
extern void func_01E2D8(int *);

void func_01E570(unsigned int value)
{
    int *object = func_01E380(value);

    if (object != 0) {
        int value = object[0];

        if (value != 0)
            func_002900(value - 1);
        func_01E2D8(object);
    }
}
