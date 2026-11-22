/* LEVEL_20:0x0B4410 -- placement copy of LEVEL_01_0DA7E8.c: tests whether the item found by the lookup at one position differs from the item found after shifting that position by the pixel width of the item's name (the name length times a global scale); returns 0 when there is no item or no name. */
extern unsigned int strlen(const char *s);

typedef struct {
    int name;
} Item;

extern float D_00116D8C;
extern Item *func_0B4368(int a, int b, int c);
extern char *func_0E2118(int id);

int func_0B4410(int a, int b, int c)
{
    Item *p;
    char *name;
    int w;

    p = func_0B4368(a, b, c);
    if (p != 0) {
        name = func_0E2118(p->name);
        if (name != 0)
            w = (int)((float)strlen(name) * D_00116D8C);
        else
            w = 0;
        if (p != func_0B4368(a, b, c + w))
            return 1;
    }
    return 0;
}
