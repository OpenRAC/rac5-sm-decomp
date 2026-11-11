/* LEVEL_05:0x152FB8 -- placement copy of LEVEL_01_15EFD0.c: state-change handler: ignores states 6 and 7 and unflagged objects, otherwise refreshes the object and, for states other than 10 and 11, restarts it; returns 3. */
typedef struct {
    char pad00[0x44];
    int f44;
} Block;

typedef struct {
    char pad00[0x45];
    unsigned char state;
    char pad46[0x1E];
    unsigned int flags;
} Obj;

extern Block D_0037F7F8;

extern void func_1BCC38(Block *b, Obj *o);
extern void func_018B88(char *a0);
extern void func_1BA090(Obj *o);
extern void func_153B70(Obj *o, int a, int b);
extern void func_150E48(char *o);
extern void func_079CF8(void *object, int flag);

int func_152FB8(Obj *o, int state)
{
    Block *b;

    if ((o->flags & 1) == 0 || state == 6 || state == 7) {
        return 1;
    }
    b = &D_0037F7F8;
    func_1BCC38(b, o);
    func_018B88((char *)o);
    if ((unsigned int)(state - 10) < 2u) {
        func_150E48((char *)o);
        func_079CF8(o, 1);
        return 3;
    }
    func_1BA090(o);
    func_153B70(o, 0, b->f44);
    func_150E48((char *)o);
    o->state = 2;
    func_079CF8(o, 1);
    return 3;
}
