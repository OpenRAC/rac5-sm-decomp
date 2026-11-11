typedef struct { unsigned char bytes[100]; } Entry;
extern Entry D_002F24B4[];
extern void func_114A88(Entry *entry, float *pos);

void func_114BB0(unsigned int index, float *pos) {
    func_114A88(&D_002F24B4[index], pos);
}
