typedef struct { unsigned char bytes[24]; } Entry;
extern Entry D_00284898[];
extern void func_09CB08(Entry *entry);

void func_09CC38(unsigned int index) {
    func_09CB08(&D_00284898[index]);
}
