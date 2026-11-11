/* LEVEL_08:0x16C558 -- placement copy of LEVEL_04_1657C8.c: clears the object's 0x19C-byte record, resolves its stored offset to the target (dropping it when the target's word at +0x40 is zero) and, when found, registers the object, resets the record's nodes and installs the idle flags. */
typedef struct Outer Outer;
typedef struct Target Target;
typedef struct Obj07CC28 Obj07CC28;
typedef void (*Hook)(Target *a0, int a1);

typedef struct {
    char pad00[0xD1];
    unsigned char bD1;
    char padD2[0x16];
    int wE8;
    int wEC;
    int wF0;
} Rec;

struct Target {
    char pad_00[0x54];
    int *pair;
    Rec *rec;
    char pad_5C[8];
    unsigned int f_64;
    char pad_68[0x10];
    unsigned int f_78;
};

extern unsigned char *D_0024FC54;
extern char D_002687E0[];
extern Hook D_003E2CD0;
extern char D_002687C0[];
extern void *memset(void *p, int v, unsigned int n);
extern void func_2089D0(char *o);
extern float func_084B98(Obj07CC28 *o, unsigned int idx);
extern void func_1F9D08(Outer *a0, Target *a1, Hook *a2, int a3);
extern void func_07FA60(char *, int, int, int, char *);
extern void func_21AEA0(char *object);
extern void func_20EE58(char *record);

static __inline__ void Zero3(int *p)
{
    p[0] = 0;
    p[1] = 0;
    p[2] = 0;
}

int func_16C558(Target *o)
{
    Rec *rec;
    int *p;
    unsigned char *t;
    int ok;

    rec = o->rec;
    memset(rec, 0, 0x19C);
    p = o->pair;
    o->f_64 = o->f_64 | 0x1000;
    if (*p == 0) {
        ok = 0;
    } else {
        t = D_0024FC54 + *p;
        if (*(int *)(t + 0x40) == 0) {
            *p = 0;
            ok = 0;
        } else {
            *p = (int)t;
            ok = 1;
        }
    }
    if (!ok) {
        return 0;
    }
    ((void (*)(Rec *, Target *, char *))func_2089D0)(rec, o, D_002687E0);
    rec->bD1 = 0;
    func_084B98((Obj07CC28 *)o, 0);
    func_1F9D08((Outer *)*p, o, &D_003E2CD0, 1);
    func_07FA60((char *)rec + 0xF4, 4, 0x44, 0x45, D_002687C0);
    func_21AEA0((char *)rec + 0xDC);
    Zero3(&rec->wE8);
    func_20EE58((char *)rec + 0x11C);
    o->f_78 = (o->f_78 & 0xFFF0FFFF) | 0x20000;
    return 1;
}
