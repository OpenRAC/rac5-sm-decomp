/* LEVEL_01:0x0DA7E8 -- tests whether the item found by the lookup at one position differs from the item found after shifting that position by the pixel width of the item's name (the name length times a global scale); returns 0 when there is no item or no name. */
extern unsigned int strlen(const char *s);

typedef struct {
    int name;
} Item;

extern float D_002067FC;
extern Item *func_0DA740(int a, int b, int c);
extern char *func_1324B0(int id);

int func_0DA7E8(int a, int b, int c)
{
    Item *p;
    char *name;
    int w;

    p = func_0DA740(a, b, c);
    if (p != 0) {
        name = func_1324B0(p->name);
        if (name != 0)
            w = (int)((float)strlen(name) * D_002067FC);
        else
            w = 0;
        if (p != func_0DA740(a, b, c + w))
            return 1;
    }
    return 0;
}
