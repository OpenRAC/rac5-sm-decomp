typedef struct { unsigned char bytes[24]; } Entry;
extern Entry D_002CA958[];
extern void func_0AC6D8(Entry *entry);

void func_0AC808(unsigned int index) {
    func_0AC6D8(&D_002CA958[index]);
}
