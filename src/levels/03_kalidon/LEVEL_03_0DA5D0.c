/* LEVEL_03:0x0DA5D0 -- placement copy of LEVEL_01_0DA7E8.c: tests whether the item found by the lookup at one position differs from the item found after shifting that position by the pixel width of the item's name (the name length times a global scale); returns 0 when there is no item or no name. */
extern unsigned int strlen(const char *s);

typedef struct {
    int name;
} Item;

extern float D_0021EE7C;
extern Item *func_0DA528(int a, int b, int c);
extern char *func_130878(int id);

int func_0DA5D0(int a, int b, int c)
{
    Item *p;
    char *name;
    int w;

    p = func_0DA528(a, b, c);
    if (p != 0) {
        name = func_130878(p->name);
        if (name != 0)
            w = (int)((float)strlen(name) * D_0021EE7C);
        else
            w = 0;
        if (p != func_0DA528(a, b, c + w))
            return 1;
    }
    return 0;
}
