typedef signed char s8;
typedef unsigned char u8;
typedef signed short s16;
typedef unsigned short u16;
typedef signed int s32;
typedef unsigned int u32;
typedef signed long long s64;
typedef unsigned long long u64;
typedef float f32;
typedef double f64;
typedef void VOID;
#define NULL ((void *)0)


extern s32 DIntr();
extern s32 EnableInterrupts();

void VSync(void) {
    s32 old;

    old = DIntr();
    *(volatile u32 *)0x1000F000 = 4;
    __builtin_rac5_sync();
    if (old != 0) {
        EnableInterrupts();
    }
    while ((*(volatile u32 *)0x1000F000 & 4) == 0) {
    }
    old = DIntr();
    *(volatile u32 *)0x1000F000 = 4;
    __builtin_rac5_sync();
    if (old != 0) {
        EnableInterrupts();
    }
}
