/* LEVEL_10.REL:0x003180 -- arms two fields of the shared record; each write
   reloads the handle, so the global is held in a structure. */
typedef struct { char pad[0x20C]; float f_20C; char pad2[0x218 - 0x210]; float f_218; } Rec;
typedef struct { Rec *p; } Holder;
extern Holder D_001F8254;
void func_003180(float a, float b)
{
    D_001F8254.p->f_20C = a;
    D_001F8254.p->f_218 = b;
}
