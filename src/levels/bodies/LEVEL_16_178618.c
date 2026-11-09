/* LEVEL_16:0x178618 -- runs three small init loops over two slots and sets object state. */
typedef struct Sub {
    char pad0[0x1C];
    int p1C;
    char pad1[0x2C - 0x20];
    int w2C;
} Sub;

typedef struct Obj {
    char pad0[0x45];
    unsigned char b45;
    char pad1[0x54 - 0x46];
    Sub *p54;
} Obj;

extern char D_00000F68[];
extern void func_116930(int);
extern void func_177928(Obj *);
extern int func_079388(void);
extern void func_079398(int);
extern void func_079328(int);
extern void func_000BF0(int);
extern void func_000CF0(int index, int first, int second);
extern void func_115560(int value);
extern void func_115438(int, int, int, int);

void func_178618(Obj *obj)
{
    unsigned int i;
    Sub *s = obj->p54;
    for (i = 0; i < 2; i++)
        func_116930(i);
    func_177928(obj);
    s->w2C = func_079388();
    for (i = 0; i < 2; i++) {
        func_079398(i);
        func_079328(0);
    }
    func_079398(0);
    for (i = 0; i < 2; i++) {
        func_000BF0(i);
        func_000CF0(0, (int)D_00000F68, (int)obj);
    }
    obj->b45 = 2;
    func_115560(s->p1C);
    func_115438(1, 0, 0x5A, 0);
}
