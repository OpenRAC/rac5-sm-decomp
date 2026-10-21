/* FRONTEND:0x027408 -- walks one child of the list. */
extern char D_0027C28[];

struct Child {
    short f00;
    char pad02[2];
    void *f04;
};

extern int func_027520(void *, char *, int, void *, void (*)(void), void *);
extern int func_026ED8(void);

int func_027408(void *parent)
{
    struct Child *child;
    int result = 0;

    if (parent != 0) {
        child = (struct Child *)(*(void **)((char *)parent + 4));
        result = func_027520(child->f04, D_0027C28, 1,
                             (char *)parent + child->f00,
                             (void (*)(void))func_026ED8, parent);
    }
    return result != 0;
}
