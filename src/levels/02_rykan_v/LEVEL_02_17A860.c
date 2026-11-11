/* LEVEL_02:0x17A860 -- dispatches on the object's type byte (+0x45): 1, 2 and 3 run their own handler. */
extern void func_17A920(char *object);
extern void func_17AD18(char *object);
extern void func_17AE28(char *object);

void func_17A860(char *object)
{
    unsigned char type;

    type = *(unsigned char *)(object + 0x45);
    if (type == 1) {
        func_17A920(object);
    } else if (type == 2) {
        func_17AD18(object);
    } else if (type == 3) {
        func_17AE28(object);
    }
}
