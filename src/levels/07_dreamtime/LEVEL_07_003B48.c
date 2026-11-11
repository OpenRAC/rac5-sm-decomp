/* LEVEL_07:003B48 -- stores the incoming sample into the global record. */
typedef struct { char pad[0x154]; float f_154; } Rec;
extern Rec *D_00203554;
void func_003B48(float f12)
{
    D_00203554->f_154 = f12;
}
