/* LEVEL_01.REL:0x129968 -- load and validate a level data block. */
typedef unsigned char u8;
typedef unsigned int u32;

typedef struct {
    u8 stage[0x800];
    int decoded;
    u8 check[12];
} LoaderLocals;

extern void *D_00206E7C;
extern u32 D_00206E80;
extern char D_00217F48[];
extern char D_00217F50[];
extern char D_00217F58[];

extern void *func_119E40(const char *path, const char *mode);
extern int func_119FF0(void *dest, int size, int count, void *handle);
extern void func_119FA8(void *handle, int offset, int origin);
extern int func_11A0C8(void *dest, int size, int count, void *handle);
extern void func_11A148(void *handle);
extern void *func_10F6F0(u32 alignment, u32 size, u32 boundary, const char *tag, u32 id);
extern void *func_10F7A0(u32 size, u32 flags, const char *tag, u32 id);
extern void func_10F828(void *ptr, int a, int b);
extern int func_10FDE0(void *source, void *dest, u32 size, int *result,
                       void *scratch, void (*callback)(void));
extern void func_129888(void);
extern int func_029750(void *handle, void *result);
extern int func_029FB0(void);
extern void func_129768(void);
extern void *PS2HEAP_Malloc__FUi(u32 size);
extern void PS2HEAP_Free__FPv(void *ptr);
extern void MCPI_SendProgress__Fii(int value, int state);
extern void *memset(void *dest, int value, u32 size);
extern int memcmp(const void *left, const void *right, u32 size);
extern void *memcpy(void *dest, const void *source, u32 size);

#define STAGE32(off) (*(u32 *)(stage + (off)))
#define DEST32(off) (*(u32 *)((u8 *)*output + (off)))

int func_129968(const char *path, void **output, void **arena, int mode)
{
    LoaderLocals locals;
    u8 *stage;
    void *dest;
    void *aux;
    void *scratch;
    int count;
    int result;

    D_00206E7C = func_119E40(path, D_00217F48);
    if (D_00206E7C == 0)
        return 0;

    stage = locals.stage;
    memset(stage, 0, 0xC0);
    count = func_119FF0(stage, 0x800, 1, D_00206E7C);
    if (count != 1 || memcmp(stage, D_00217F50, 4) != 0 ||
        STAGE32(0x38) != 6)
        goto close_failure;

    aux = 0;
    if (mode == 1) {
        dest = *output;
        scratch = PS2HEAP_Malloc__FUi((STAGE32(0x40) + 0x8BF) & 0xFFFFF800u);
        if (scratch == 0)
            return 0;
    } else {
        if (arena != 0) {
            dest = *arena;
            aux = (u8 *)dest + STAGE32(0x3C) + 0xC0;
            *arena = (void *)(((u32)aux + 0x20013) & 0xFFFFFFF0u);
        } else {
            dest = func_10F6F0(0x40, STAGE32(0x3C) + 0xC0,
                               0x10, D_00217F58, 0x134);
            aux = func_10F7A0(0x20800, 0, D_00217F58, 0x13A);
        }
        if (dest == 0)
            goto free_aux_and_close;
        if (aux == 0)
            goto free_dest_and_close;
        scratch = (void *)(((u32)dest + STAGE32(0x3C) - STAGE32(0x40) +
                            0x200C0) & 0xFFFFFFF0u);
    }

    func_119FA8(D_00206E7C, 0, 2);
    memcpy(dest, stage, 0xC0);
    if (func_119FF0(scratch, 1, 0x80000, D_00206E7C) == 0)
        goto free_aux_and_dest;
    if (func_11A0C8((u8 *)scratch + 0x80000, 1, 0x80000,
                     D_00206E7C) != 0)
        goto free_aux_and_dest;

    D_00206E80 = STAGE32(0x40) - 0x7FF40;
    result = func_10FDE0((u8 *)scratch + 0xC0, (u8 *)dest + 0xC0,
                          STAGE32(0x40), &locals.decoded,
                          (u8 *)scratch + 0x80000, func_129888);
    if (func_029750(D_00206E7C, locals.check) < 0)
        goto free_aux_and_dest;

    MCPI_SendProgress__Fii(func_029FB0(), 0);
    if (mode == 1) {
        PS2HEAP_Free__FPv(scratch);
    } else if (arena == 0) {
        func_10F828(aux, 0, 0);
        aux = 0;
        *output = dest;
    } else {
        *output = dest;
    }
    func_11A148(D_00206E7C);

    if (result != (int)DEST32(0x3C))
        goto free_output;
    if (DEST32(0x34) == (u32)locals.decoded) {
        func_129768();
        if (aux != 0)
            func_10F828(aux, 0, 0);
        return 1;
    }

free_output:
    if (aux != 0)
        func_10F828(aux, 0, 0);
    if (dest == 0)
        return 0;
    func_10F828(dest, 0, 0);
    return 0;

free_aux_and_dest:
    if (aux != 0)
        func_10F828(aux, 0, 0);
free_dest_and_close:
    if (dest != 0)
        func_10F828(dest, 0, 0);
close_failure:
    func_11A148(D_00206E7C);
    return 0;
free_aux_and_close:
    if (aux != 0)
        func_10F828(aux, 0, 0);
    goto free_dest_and_close;
}
