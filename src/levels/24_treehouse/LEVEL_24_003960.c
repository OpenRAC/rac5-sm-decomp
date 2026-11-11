/* LEVEL_24.REL:0x003960 -- arms two fields of the shared record; each write
   reloads the handle, so the global is held in a structure. */
typedef struct { char pad[0x164]; float f_164; float f_168; } Rec;
typedef struct { Rec *p; } Holder;
extern Holder D_001BFED4;
void func_003960(float a, float b)
{
    D_001BFED4.p->f_164 = a;
    D_001BFED4.p->f_168 = b;
}
