typedef struct { unsigned char bytes[100]; } Entry;
extern Entry D_00347AEC[];
extern void func_0F5B10(Entry *entry);

void func_0F5C78(unsigned int index) {
    func_0F5B10(&D_00347AEC[index]);
}
