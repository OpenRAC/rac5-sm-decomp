/* LEVEL_03:0x08CA10 -- placement copy of LEVEL_01_08CDE0.c: clears a 16-byte command header and links it into a list cursor. */
typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;
typedef unsigned long long u64;

extern u8 *D_0020E9D0;
extern int D_0020E9D4;
extern u8 *D_0020E9D8;

void func_08CA10(u8 *command)
{
    u8 *next;
    int consumed;
    u64 w;

    *(u16 *)(command + 0) = 0;
    w = *(u64 *)command;
    w &= 0xFFFFFFFFFC00FFFFULL;
    w &= 0xFFFFFFFFF3FFFFFFULL;
    *(u16 *)(command + 8) = 0;
    w &= 0xFFFFFFFF8FFFFFFFULL;
    *(u8 *)(command + 10) = 0;
    *(u8 *)(command + 11) = 0;
    w |= 0x0000000060000000ULL;
    *(u16 *)(command + 12) = 0;
    w &= 0xFFFFFFFF7FFFFFFFULL;
    *(u8 *)(command + 14) = 0;
    *(u8 *)(command + 15) = 0;
    w &= 0x80000000FFFFFFFFULL;
    w &= 0x7FFFFFFFFFFFFFFFULL;
    *(u64 *)command = w;

    next = command + 16;
    consumed = (int)next - (int)D_0020E9D8;
    D_0020E9D0 = next;
    D_0020E9D4 -= (consumed >> 4) << 4;
}
