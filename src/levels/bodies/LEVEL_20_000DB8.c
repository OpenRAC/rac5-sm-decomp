/* LEVEL_20.REL:0x000DB8 -- reads the live amplitude of the current voice. */
typedef struct { char pad[0x110]; float f_110; } Voice;
extern Voice *D_000FD3B4;
float func_000DB8(void) { return D_000FD3B4->f_110; }
