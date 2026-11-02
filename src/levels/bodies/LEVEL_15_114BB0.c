typedef struct { unsigned char bytes[100]; } Entry;
extern Entry D_002F24B4[];
extern void func_114A88(Entry *entry);

void func_114BB0(unsigned int index) {
    func_114A88(&D_002F24B4[index]);
}
