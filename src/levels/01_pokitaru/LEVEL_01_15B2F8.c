/* LEVEL_01.REL:0x15B2F8 -- when the cheap probe func_07CAB8 answers non zero,
   hands the +0x44 float of the record's +0x54 owner to func_15DBA8 and then
   flags the record through func_07C670. */
typedef struct {
    unsigned char pad0[0x44];
    float v_44;
} Inner;

typedef struct {
    unsigned char pad0[0x54];
    Inner *p_54;
} Rec;

extern int func_07CAB8(Rec *a0, int flag);
extern void func_15DBA8(Rec *a0, float value);
extern void func_07C670(Rec *a0, int on);

void func_15B2F8(Rec *a0)
{
    if (func_07CAB8(a0, 0) != 0) {
        func_15DBA8(a0, a0->p_54->v_44);
        func_07C670(a0, 1);
    }
}
