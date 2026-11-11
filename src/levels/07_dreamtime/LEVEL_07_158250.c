/* LEVEL_07.REL:0x158250 -- squares the first level and stores both. */
typedef struct { char pad[0x48C]; float f_48C; float f_490; } Rec;
extern Rec D_003A74A8;
void func_158250(float a, float b) { D_003A74A8.f_490 = b; D_003A74A8.f_48C = a * a; }
