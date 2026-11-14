/* LEVEL_06:0x18C4E8 -- when the lookup accepts the object's first value, plays the sound for its state byte and runs the follow-up with 1. */
extern char D_00221EC0[];
extern int func_07D818(int value, char *table);
extern void func_024E28(int a0, int a1, int a2, int a3, int a4, int a5, int a6);
extern void func_076268(char *object, int a1);

void func_18C4E8(char *object)
{
    char *table;

    table = D_00221EC0;
    table += 0x30;
    if (func_07D818(**(int **)(object + 0x54), table) != 0) {
        func_024E28(*(unsigned char *)(object + 0x45), 1, 0, 0, 0, -1, 1);
        func_076268(object, 1);
    }
}
