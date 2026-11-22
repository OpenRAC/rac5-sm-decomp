/* LEVEL_02:0x0E1178 -- placement copy of LEVEL_01_0DA7E8.c: tests whether the item found by the lookup at one position differs from the item found after shifting that position by the pixel width of the item's name (the name length times a global scale); returns 0 when there is no item or no name. */
extern unsigned int strlen(const char *s);

typedef struct {
    int name;
} Item;

extern float D_0021B7BC;
extern Item *func_0E10D0(int a, int b, int c);
extern char *func_138860(int id);

int func_0E1178(int a, int b, int c)
{
    Item *p;
    char *name;
    int w;

    p = func_0E10D0(a, b, c);
    if (p != 0) {
        name = func_138860(p->name);
        if (name != 0)
            w = (int)((float)strlen(name) * D_0021B7BC);
        else
            w = 0;
        if (p != func_0E10D0(a, b, c + w))
            return 1;
    }
    return 0;
}
