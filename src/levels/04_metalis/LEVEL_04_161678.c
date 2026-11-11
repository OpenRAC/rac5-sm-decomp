/* LEVEL_04.REL:0x161678 -- squares the first level and stores both. */
typedef struct { char pad[0x48C]; float f_48C; float f_490; } Rec;
extern Rec D_003AC358;
void func_161678(float a, float b) { D_003AC358.f_490 = b; D_003AC358.f_48C = a * a; }
