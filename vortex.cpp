#include <windows.h>
#include <string>
#include <thread>
#include <iostream>
#include <stdlib.h>

#define sleep(_time) (std::this_thread::sleep_for(std::chrono::milliseconds(_time)))

int vortexToggle;
int vortexExit = VK_END;
int vortexTime = 50;
int a;
int b;

std::string read;

void Switch() {
	while (!(GetAsyncKeyState(vortexExit) & 0x8000)) { // loop until vortexExit
		if (GetAsyncKeyState(vortexToggle) & 0x8000) {
			system("powershell \"New-NetQosPolicy -Name \"GyzaoV2\" -AppPathNameMatchCondition \"EscapeFromTarkov.exe\" -ThrottleRateActionBitsPerSecond 6kb -PolicyStore ActiveStore\"");
			Beep(800, 200);

			sleep(vortexTime);
			if (GetAsyncKeyState(vortexToggle) & 0x8000) {
				system("powershell Remove-NetQosPolicy -PolicyStore ActiveStore -Confirm:$false");
				Beep(500, 200);
				continue;
			}
			sleep(vortexTime);
			if (GetAsyncKeyState(vortexToggle) & 0x8000) {
				system("powershell Remove-NetQosPolicy -PolicyStore ActiveStore -Confirm:$false");
				Beep(500, 200);
				continue;
			}
			sleep(vortexTime);
			if (GetAsyncKeyState(vortexToggle) & 0x8000) {
				system("powershell Remove-NetQosPolicy -PolicyStore ActiveStore -Confirm:$false");
				Beep(500, 200);
				continue;
			}
			sleep(vortexTime);
			if (GetAsyncKeyState(vortexToggle) & 0x8000) {
				system("powershell Remove-NetQosPolicy -PolicyStore ActiveStore -Confirm:$false");
				Beep(500, 200);
				continue;
			}
			sleep(vortexTime);
			if (GetAsyncKeyState(vortexToggle) & 0x8000) {
				system("powershell Remove-NetQosPolicy -PolicyStore ActiveStore -Confirm:$false");
				Beep(500, 200);
				continue;
			}
			sleep(vortexTime);
			if (GetAsyncKeyState(vortexToggle) & 0x8000) {
				system("powershell Remove-NetQosPolicy -PolicyStore ActiveStore -Confirm:$false");
				Beep(500, 200);
				continue;
			}
			sleep(vortexTime);
			if (GetAsyncKeyState(vortexToggle) & 0x8000) {
				system("powershell Remove-NetQosPolicy -PolicyStore ActiveStore -Confirm:$false");
				Beep(500, 200);
				continue;
			}
			sleep(vortexTime);
			if (GetAsyncKeyState(vortexToggle) & 0x8000) {
				system("powershell Remove-NetQosPolicy -PolicyStore ActiveStore -Confirm:$false");
				Beep(500, 200);
				continue;
			}
			sleep(vortexTime);
			if (GetAsyncKeyState(vortexToggle) & 0x8000) {
				system("powershell Remove-NetQosPolicy -PolicyStore ActiveStore -Confirm:$false");
				Beep(500, 200);
				continue;
			}
			sleep(vortexTime);
			if (GetAsyncKeyState(vortexToggle) & 0x8000) {
				system("powershell Remove-NetQosPolicy -PolicyStore ActiveStore -Confirm:$false");
				Beep(500, 200);
				continue;
			}
			sleep(vortexTime);
			if (GetAsyncKeyState(vortexToggle) & 0x8000) {
				system("powershell Remove-NetQosPolicy -PolicyStore ActiveStore -Confirm:$false");
				Beep(500, 200);
				continue;
			}
			sleep(vortexTime);
			if (GetAsyncKeyState(vortexToggle) & 0x8000) {
				system("powershell Remove-NetQosPolicy -PolicyStore ActiveStore -Confirm:$false");
				Beep(500, 200);
				continue;
			}
			if (GetAsyncKeyState(vortexToggle) & 0x8000) {
				system("powershell Remove-NetQosPolicy -PolicyStore ActiveStore -Confirm:$false");
				Beep(500, 200);
				continue;
			}
			sleep(vortexTime);
			if (GetAsyncKeyState(vortexToggle) & 0x8000) {
				system("powershell Remove-NetQosPolicy -PolicyStore ActiveStore -Confirm:$false");
				Beep(500, 200);
				continue;
			}
			sleep(vortexTime);
			if (GetAsyncKeyState(vortexToggle) & 0x8000) {
				system("powershell Remove-NetQosPolicy -PolicyStore ActiveStore -Confirm:$false");
				Beep(500, 200);
				continue;
			}
			sleep(vortexTime);
			if (GetAsyncKeyState(vortexToggle) & 0x8000) {
				system("powershell Remove-NetQosPolicy -PolicyStore ActiveStore -Confirm:$false");
				Beep(500, 200);
				continue;
			}
			sleep(vortexTime);
			if (GetAsyncKeyState(vortexToggle) & 0x8000) {
				system("powershell Remove-NetQosPolicy -PolicyStore ActiveStore -Confirm:$false");
				Beep(500, 200);
				continue;
			}
			sleep(vortexTime);
			if (GetAsyncKeyState(vortexToggle) & 0x8000) {
				system("powershell Remove-NetQosPolicy -PolicyStore ActiveStore -Confirm:$false");
				Beep(500, 200);
				continue;
			}
			sleep(vortexTime);
			if (GetAsyncKeyState(vortexToggle) & 0x8000) {
				system("powershell Remove-NetQosPolicy -PolicyStore ActiveStore -Confirm:$false");
				Beep(500, 200);
				continue;
			}
			sleep(vortexTime);
			if (GetAsyncKeyState(vortexToggle) & 0x8000) {
				system("powershell Remove-NetQosPolicy -PolicyStore ActiveStore -Confirm:$false");
				Beep(500, 200);
				continue;
			}
			sleep(vortexTime);
			if (GetAsyncKeyState(vortexToggle) & 0x8000) {
				system("powershell Remove-NetQosPolicy -PolicyStore ActiveStore -Confirm:$false");
				Beep(500, 200);
				continue;
			}
			sleep(vortexTime);
			if (GetAsyncKeyState(vortexToggle) & 0x8000) {
				system("powershell Remove-NetQosPolicy -PolicyStore ActiveStore -Confirm:$false");
				Beep(500, 200);
				continue;
			}
			sleep(vortexTime);
			if (GetAsyncKeyState(vortexToggle) & 0x8000) {
				system("powershell Remove-NetQosPolicy -PolicyStore ActiveStore -Confirm:$false");
				Beep(500, 200);
				continue;
			}
			sleep(vortexTime);
			if (GetAsyncKeyState(vortexToggle) & 0x8000) {
				system("powershell Remove-NetQosPolicy -PolicyStore ActiveStore -Confirm:$false");
				Beep(500, 200);
				continue;
			}
			if (GetAsyncKeyState(vortexToggle) & 0x8000) {
				system("powershell Remove-NetQosPolicy -PolicyStore ActiveStore -Confirm:$false");
				Beep(500, 200);
				continue;
			}
			sleep(vortexTime);
			if (GetAsyncKeyState(vortexToggle) & 0x8000) {
				system("powershell Remove-NetQosPolicy -PolicyStore ActiveStore -Confirm:$false");
				Beep(500, 200);
				continue;
			}
			sleep(vortexTime);
			if (GetAsyncKeyState(vortexToggle) & 0x8000) {
				system("powershell Remove-NetQosPolicy -PolicyStore ActiveStore -Confirm:$false");
				Beep(500, 200);
				continue;
			}
			sleep(vortexTime);
			if (GetAsyncKeyState(vortexToggle) & 0x8000) {
				system("powershell Remove-NetQosPolicy -PolicyStore ActiveStore -Confirm:$false");
				Beep(500, 200);
				continue;
			}
			sleep(vortexTime);
			if (GetAsyncKeyState(vortexToggle) & 0x8000) {
				system("powershell Remove-NetQosPolicy -PolicyStore ActiveStore -Confirm:$false");
				Beep(500, 200);
				continue;
			}
			sleep(vortexTime);
			if (GetAsyncKeyState(vortexToggle) & 0x8000) {
				system("powershell Remove-NetQosPolicy -PolicyStore ActiveStore -Confirm:$false");
				Beep(500, 200);
				continue;
			}
			sleep(vortexTime);
			if (GetAsyncKeyState(vortexToggle) & 0x8000) {
				system("powershell Remove-NetQosPolicy -PolicyStore ActiveStore -Confirm:$false");
				Beep(500, 200);
				continue;
			}
			sleep(vortexTime);
			if (GetAsyncKeyState(vortexToggle) & 0x8000) {
				system("powershell Remove-NetQosPolicy -PolicyStore ActiveStore -Confirm:$false");
				Beep(500, 200);
				continue;
			}
			sleep(vortexTime);
			if (GetAsyncKeyState(vortexToggle) & 0x8000) {
				system("powershell Remove-NetQosPolicy -PolicyStore ActiveStore -Confirm:$false");
				Beep(500, 200);
				continue;
			}
			sleep(vortexTime);
			if (GetAsyncKeyState(vortexToggle) & 0x8000) {
				system("powershell Remove-NetQosPolicy -PolicyStore ActiveStore -Confirm:$false");
				Beep(500, 200);
				continue;
			}
			sleep(vortexTime);
			if (GetAsyncKeyState(vortexToggle) & 0x8000) {
				system("powershell Remove-NetQosPolicy -PolicyStore ActiveStore -Confirm:$false");
				Beep(500, 200);
				continue;
			}
			sleep(vortexTime);
			if (GetAsyncKeyState(vortexToggle) & 0x8000) {
				system("powershell Remove-NetQosPolicy -PolicyStore ActiveStore -Confirm:$false");
				Beep(500, 200);
				continue;
			}
			if (GetAsyncKeyState(vortexToggle) & 0x8000) {
				system("powershell Remove-NetQosPolicy -PolicyStore ActiveStore -Confirm:$false");
				Beep(500, 200);
				continue;
			}
			sleep(vortexTime);
			if (GetAsyncKeyState(vortexToggle) & 0x8000) {
				system("powershell Remove-NetQosPolicy -PolicyStore ActiveStore -Confirm:$false");
				Beep(500, 200);
				continue;
			}
			sleep(vortexTime);
			if (GetAsyncKeyState(vortexToggle) & 0x8000) {
				system("powershell Remove-NetQosPolicy -PolicyStore ActiveStore -Confirm:$false");
				Beep(500, 200);
				Sleep(1);
				Beep(300, 200);
				continue;
			}
			sleep(vortexTime);
			if (GetAsyncKeyState(vortexToggle) & 0x8000) {
				system("powershell Remove-NetQosPolicy -PolicyStore ActiveStore -Confirm:$false");
				Beep(500, 200);
				Sleep(1);
				Beep(300, 200);
				continue;
			}
			sleep(vortexTime);
			if (GetAsyncKeyState(vortexToggle) & 0x8000) {
				system("powershell Remove-NetQosPolicy -PolicyStore ActiveStore -Confirm:$false");
				Beep(500, 200);
				Sleep(1);
				Beep(300, 200);
				continue;
			}
			sleep(vortexTime);
			if (GetAsyncKeyState(vortexToggle) & 0x8000) {
				system("powershell Remove-NetQosPolicy -PolicyStore ActiveStore -Confirm:$false");
				Beep(500, 200);
				Sleep(1);
				Beep(300, 200);
				continue;
			}
			sleep(vortexTime);
			if (GetAsyncKeyState(vortexToggle) & 0x8000) {
				system("powershell Remove-NetQosPolicy -PolicyStore ActiveStore -Confirm:$false");
				Beep(500, 200);
				Sleep(1);
				Beep(300, 200);
				continue;
			}
			sleep(vortexTime);
			if (GetAsyncKeyState(vortexToggle) & 0x8000) {
				system("powershell Remove-NetQosPolicy -PolicyStore ActiveStore -Confirm:$false");
				Beep(500, 200);
				Sleep(1);
				Beep(300, 200);
				continue;
			}
			sleep(vortexTime);
			if (GetAsyncKeyState(vortexToggle) & 0x8000) {
				system("powershell Remove-NetQosPolicy -PolicyStore ActiveStore -Confirm:$false");
				Beep(500, 200);
				Sleep(1);
				Beep(300, 200);
				continue;
			}
			sleep(vortexTime);
			if (GetAsyncKeyState(vortexToggle) & 0x8000) {
				system("powershell Remove-NetQosPolicy -PolicyStore ActiveStore -Confirm:$false");
				Beep(500, 200);
				Sleep(1);
				Beep(300, 200);
				continue;
			}
			sleep(vortexTime);
			if (GetAsyncKeyState(vortexToggle) & 0x8000) {
				system("powershell Remove-NetQosPolicy -PolicyStore ActiveStore -Confirm:$false");
				Beep(500, 200);
				Sleep(1);
				Beep(300, 200);
				continue;
			}
			sleep(vortexTime);
			if (GetAsyncKeyState(vortexToggle) & 0x8000) {
				system("powershell Remove-NetQosPolicy -PolicyStore ActiveStore -Confirm:$false");
				Beep(500, 200);
				Sleep(1);
				Beep(300, 200);
				continue;
			}
			if (GetAsyncKeyState(vortexToggle) & 0x8000) {
				system("powershell Remove-NetQosPolicy -PolicyStore ActiveStore -Confirm:$false");
				Beep(500, 200);
				Sleep(1);
				Beep(300, 200);
				continue;
			}
			sleep(vortexTime);
			if (GetAsyncKeyState(vortexToggle) & 0x8000) {
				system("powershell Remove-NetQosPolicy -PolicyStore ActiveStore -Confirm:$false");
				Beep(500, 200);
				Sleep(1);
				Beep(300, 200);
				continue;
			}
			sleep(vortexTime);
			if (GetAsyncKeyState(vortexToggle) & 0x8000) {
				system("powershell Remove-NetQosPolicy -PolicyStore ActiveStore -Confirm:$false");
				Beep(500, 200);
				Sleep(1);
				Beep(300, 200);
				continue;
			}
			sleep(vortexTime);
			if (GetAsyncKeyState(vortexToggle) & 0x8000) {

				system("powershell Remove-NetQosPolicy -PolicyStore ActiveStore -Confirm:$false");
				Beep(500, 200);
				Sleep(1);
				Beep(300, 200);
				continue;
			}
			sleep(vortexTime);
			if (GetAsyncKeyState(vortexToggle) & 0x8000) {
				system("powershell Remove-NetQosPolicy -PolicyStore ActiveStore -Confirm:$false");
				Beep(500, 200);
				Sleep(1);
				Beep(300, 200);
				continue;
			}
			sleep(vortexTime);
			if (GetAsyncKeyState(vortexToggle) & 0x8000) {
				system("powershell Remove-NetQosPolicy -PolicyStore ActiveStore -Confirm:$false");
				Beep(500, 200);
				Sleep(1);
				Beep(300, 200);
				continue;
			}
			sleep(vortexTime);
			if (GetAsyncKeyState(vortexToggle) & 0x8000) {
				system("powershell Remove-NetQosPolicy -PolicyStore ActiveStore -Confirm:$false");
				Beep(500, 200);
				Sleep(1);
				Beep(300, 200);
				continue;
			}
			sleep(vortexTime);
			if (GetAsyncKeyState(vortexToggle) & 0x8000) {
				system("powershell Remove-NetQosPolicy -PolicyStore ActiveStore -Confirm:$false");
				Beep(500, 200);
				Sleep(1);
				Beep(300, 200);
				continue;
			}
			sleep(vortexTime);
			if (GetAsyncKeyState(vortexToggle) & 0x8000) {
				system("powershell Remove-NetQosPolicy -PolicyStore ActiveStore -Confirm:$false");
				Beep(500, 200);
				Sleep(1);
				Beep(300, 200);
				continue;
			}
			sleep(vortexTime);
			if (GetAsyncKeyState(vortexToggle) & 0x8000) {
				system("powershell Remove-NetQosPolicy -PolicyStore ActiveStore -Confirm:$false");
				Beep(500, 200);
				Sleep(1);
				Beep(300, 200);
				continue;
			}
			sleep(vortexTime);
			if (GetAsyncKeyState(vortexToggle) & 0x8000) {
				system("powershell Remove-NetQosPolicy -PolicyStore ActiveStore -Confirm:$false");
				Beep(500, 200);
				Sleep(1);
				Beep(300, 200);
				continue;
			}
			sleep(vortexTime);
			if (GetAsyncKeyState(vortexToggle) & 0x8000) {
				system("powershell Remove-NetQosPolicy -PolicyStore ActiveStore -Confirm:$false");
				Beep(500, 200);
				Sleep(1);
				Beep(300, 200);
				continue;
			}
			system("powershell Remove-NetQosPolicy -PolicyStore ActiveStore -Confirm:$false");
			Beep(500, 200);
			Sleep(1);
			Beep(300, 200);
		}
		sleep(5); // avoid high cpu usage
	}
	Beep(200, 200);
	ShowWindow(GetConsoleWindow(), SW_SHOW);
	return;
}

int main() {
	SetConsoleTitle(TEXT("Vortex v2.3 by Apex"));
	system("Color c");
	std::cout << "Welcome to Vortex v2.3 - Automatic anti-kick enabled.\n";
	std::cout << "\nHide Vortex v2.3 in the background? (END = EXIT):\n";

	do
	{
		std::cout << "\n1. Yes\n";
		std::cout << "2. No\n";
		std::cin >> b;
		if (b == 1) {
			system("cls");
			std::cout << "Select your preferred keybind:\n";
			do
			{
				std::cout << "\n1. V\n";
				std::cout << "2. VK_XBUTTON1\n";
				std::cout << "3. F2\n\n";
				std::cin >> a;
				if (a == 1) {
					vortexToggle = 0x56;
					system("cls");
					std::cout << "Vortex v2.3 is now active - V Keybind Enabled\n";
					std::cout << "\nMasking software...";
					sleep(3000);
					ShowWindow(GetConsoleWindow(), SW_HIDE);
					system("powershell Remove-NetQosPolicy -PolicyStore ActiveStore -Confirm:$false");
					Switch();
				}
				else if (a == 2) {
					vortexToggle = VK_XBUTTON1;
					system("cls");
					std::cout << "Vortex v2.3 is now active - VK_XBUTTON1 Keybind Enabled\n";
					std::cout << "\nMasking software...";
					sleep(3000);
					ShowWindow(GetConsoleWindow(), SW_HIDE);
					system("powershell Remove-NetQosPolicy -PolicyStore ActiveStore -Confirm:$false");
					Switch();
				}
				else if (a == 3) {
					vortexToggle = VK_F2;
					system("cls");
					std::cout << "Vortex v2.3 is now active - F2 Keybind Enabled\n";
					std::cout << "\nMasking software...";
					sleep(3000);
					ShowWindow(GetConsoleWindow(), SW_HIDE);
					system("powershell Remove-NetQosPolicy -PolicyStore ActiveStore -Confirm:$false");
					Switch();
				}
				std::cout << "\n\nYou entered a invalid key, try again\n\n";
			} while (true);
		}
		else if (b == 2) {
			system("cls");
			std::cout << "Select your preferred keybind:\n";
			do
			{
				std::cout << "\n1. V\n";
				std::cout << "2. MOUSE X2\n";
				std::cout << "3. F2\n\n";
				std::cin >> a;
				if (a == 1) {
					vortexToggle = 0x56;
					system("cls");
					std::cout << "Vortex v2.3 is now active - V Keybind Enabled\n";
					system("powershell Remove-NetQosPolicy -PolicyStore ActiveStore -Confirm:$false");
					Switch();
				}
				else if (a == 2) {
					vortexToggle = VK_XBUTTON1;
					system("cls");
					std::cout << "Vortex v2.3 is now active - MOUSE X2 Keybind Enabled\n";
					system("powershell Remove-NetQosPolicy -PolicyStore ActiveStore -Confirm:$false");
					Switch();
				}
				else if (a == 3) {
					vortexToggle = VK_F2;
					system("cls");
					std::cout << "Vortex v2.3 is now active - F2 Keybind Enabled\n";
					system("powershell Remove-NetQosPolicy -PolicyStore ActiveStore -Confirm:$false");
					Switch();
				}
				std::cout << "\n\nYou entered a invalid key, try again\n\n";
			} while (true);
		}
		std::cout << "\n\nYou entered a invalid key, try again\n\n";
	} while (true);


}
