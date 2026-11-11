/* LEVEL_07.REL:0x001200 -- reads the live amplitude of the current voice. */
typedef struct { char pad[0x110]; float f_110; } Voice;
extern Voice *D_00203548;
float func_001200(void) { return D_00203548->f_110; }
