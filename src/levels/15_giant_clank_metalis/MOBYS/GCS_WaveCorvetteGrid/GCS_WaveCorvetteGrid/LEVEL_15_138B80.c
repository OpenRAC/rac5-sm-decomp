/* LEVEL_15:0x138B80 -- copies a template object, allocates and deep-copies its four sub-blocks, seeds rand, and initializes it. */
typedef struct Sub08 {
    int w[2];
} Sub08;

typedef struct Sub1C {
    int w[7];
} Sub1C;

typedef struct Sub0C {
    Sub1C *p00;
    int w04;
    int w08;
} Sub0C;

typedef struct Sub158 {
    int w[0x56];
} Sub158;

typedef struct Alloc188 {
    Sub08 s00;
    Sub0C s08;
    Sub1C s14;
    Sub158 s30;
} Alloc188;

typedef struct Obj138B80 {
    int x00;
    Sub08 *p04;
    unsigned char pad08[0x20];
    Sub0C *p28;
    Sub158 *p2C;
    unsigned char pad30[0x68];
    int rand98;
} Obj138B80;

extern Obj138B80 D_00171120;
extern char D_00172110[];

extern void *func_0D4FE0(int size, int flags, char *file, int line);
extern int rand(void);
extern void func_138608(void *a0, Obj138B80 *a1);

void func_138B80(void *a0, Obj138B80 *dst)
{
    Obj138B80 *src = &D_00171120;
    Alloc188 *blk;
    Sub0C *p28;
    Sub08 *p04;
    Sub158 *p2C;
    Sub1C *p14;

    *dst = *src;
    blk = (Alloc188 *)func_0D4FE0(sizeof(Alloc188), 0, D_00172110, 0x164);
    p28 = src->p28;
    p04 = src->p04;
    p2C = src->p2C;
    p14 = p28->p00;
    blk->s00 = *p04;
    dst->p04 = &blk->s00;
    blk->s08 = *p28;
    blk->s14 = *p14;
    blk->s30 = *p2C;
    blk->s08.p00 = &blk->s14;
    dst->p28 = &blk->s08;
    dst->p2C = &blk->s30;
    dst->rand98 = rand();
    func_138608(a0, dst);
}
