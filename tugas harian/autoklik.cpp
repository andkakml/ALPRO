#include <iostream>
#include <windows.h>

int main() {
    bool clicking = false;
    POINT p;

    std::cout << "Tekan F6 untuk mulai, F8 untuk berhenti.\n";

    while (true) {
        // kalau F6 ditekan → mulai klik
        if (GetAsyncKeyState(VK_F6)) {
            clicking = true;
            std::cout << "Auto clicker AKTIF\n";
            Sleep(300);
        }

        // kalau F8 ditekan → berhenti klik
        if (GetAsyncKeyState(VK_F8)) {
            clicking = false;
            std::cout << "Auto clicker NONAKTIF\n";
            Sleep(300);
        }

        // kalau sedang aktif, klik kiri mouse
        if (clicking) {
            GetCursorPos(&p); // ambil posisi kursor saat ini
            mouse_event(MOUSEEVENTF_LEFTDOWN, p.x, p.y, 0, 0);
            mouse_event(MOUSEEVENTF_LEFTUP, p.x, p.y, 0, 0);
            Sleep(10); // jeda 100 ms
        }

        Sleep(10); // supaya CPU gak 100%
    }

    return 0;
}
