/* LEVEL_24:001248 -- copies the record's field at +0xF8 into +0xFC. */
typedef struct { char pad[0xF8]; float f_F8; float f_FC; } Rec;
extern Rec *D_001BFEC8;
void func_001248(void)
{
    float v = D_001BFEC8->f_F8;
    D_001BFEC8->f_FC = v;
}
