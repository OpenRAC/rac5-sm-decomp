/* LEVEL_10:0x0DBC28 -- placement copy of LEVEL_01_0DA7E8.c: tests whether the item found by the lookup at one position differs from the item found after shifting that position by the pixel width of the item's name (the name length times a global scale); returns 0 when there is no item or no name. */
extern unsigned int strlen(const char *s);

typedef struct {
    int name;
} Item;

extern float D_0020F7FC;
extern Item *func_0DBB80(int a, int b, int c);
extern char *func_130310(int id);

int func_0DBC28(int a, int b, int c)
{
    Item *p;
    char *name;
    int w;

    p = func_0DBB80(a, b, c);
    if (p != 0) {
        name = func_130310(p->name);
        if (name != 0)
            w = (int)((float)strlen(name) * D_0020F7FC);
        else
            w = 0;
        if (p != func_0DBB80(a, b, c + w))
            return 1;
    }
    return 0;
}
