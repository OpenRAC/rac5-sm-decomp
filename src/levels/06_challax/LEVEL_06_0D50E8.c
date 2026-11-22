/* LEVEL_06:0x0D50E8 -- placement copy of LEVEL_01_0DA7E8.c: tests whether the item found by the lookup at one position differs from the item found after shifting that position by the pixel width of the item's name (the name length times a global scale); returns 0 when there is no item or no name. */
extern unsigned int strlen(const char *s);

typedef struct {
    int name;
} Item;

extern float D_001F56FC;
extern Item *func_0D5040(int a, int b, int c);
extern char *func_128B80(int id);

int func_0D50E8(int a, int b, int c)
{
    Item *p;
    char *name;
    int w;

    p = func_0D5040(a, b, c);
    if (p != 0) {
        name = func_128B80(p->name);
        if (name != 0)
            w = (int)((float)strlen(name) * D_001F56FC);
        else
            w = 0;
        if (p != func_0D5040(a, b, c + w))
            return 1;
    }
    return 0;
}
