/* 0x01ED9B80 -- starts a hardware timer counter from interrupt context: validates the id, stamps the start time and kicks the timer handlers. Ported from OpenRAC/rac3-decomp src/boot_elf/core/1258E8.c (func_00125940). */
typedef signed int s32;
typedef unsigned int u32;
typedef unsigned char u8;
typedef unsigned long u64;

typedef struct {
    u8 pad0[8];
    u32 id;
    u32 flags;
    u64 start;
} Cnt_125940;
typedef struct {
    u8 pad0[0x1C];
    volatile s32 active;
} Tm_125940;

extern u64 iGetTimerSystemTime(void);
extern void func_01ED9668();
extern void func_01ED94D8(u64);
extern char D_01EFFF90;

s32 iStartTimerCounter(s32 id) {
    Cnt_125940 *t;
    Tm_125940 *st;
    u64 now;

    t = (Cnt_125940 *)(((u32)id >> 10) << 6);
    if (id < 0 || (id & 0x3FF) != t->id) {
        return 0x80008002;
    }
    st = (Tm_125940 *)&D_01EFFF90;
    if (st->active == id) {
        return 0x80000010;
    }
    if (t->flags & 1) {
        return 1;
    }
    now = iGetTimerSystemTime();
    t->start = now;
    t->flags |= 1;
    if (t->flags & 2) {
        func_01ED9668(t);
        func_01ED94D8(now);
    }
    return 0;
}
