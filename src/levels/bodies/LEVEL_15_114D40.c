typedef struct { unsigned char bytes[100]; } Entry;
extern Entry D_002F24E4[];
extern void func_114BE0(Entry *entry);

void func_114D40(unsigned int index) {
    func_114BE0(&D_002F24E4[index]);
}
