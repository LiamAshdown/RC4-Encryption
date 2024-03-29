/*
* Liam Ashdown
* Copyright(C) 2019
*
* This program is free software : you can redistribute it and/or modify
* it under the terms of the GNU General Public License as published by
* the Free Software Foundation, either version 3 of the License, or
*(at your option) any later version.
*
* This program is distributed in the hope that it will be useful,
*but WITHOUT ANY WARRANTY; without even the implied warranty of
* MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.See the
* GNU General Public License for more details.
*
* You should have received a copy of the GNU General Public License
* along with this program.If not, see < http://www.gnu.org/licenses/>.
*/


#include "RC4.h"
#include <iostream>

int main()
{

    SteerStone::RC4 l_RC4;
    l_RC4.SetData("The quick brown fox jumps over the lazy dog");
    l_RC4.SetKey("kjashdjh873182ksjdanfnja289341kjasnhf18923");

    std::string Encryption = l_RC4.Encrypt();
    std::string Descryption = l_RC4.Decrypt();

    std::cout << "Encrypted: " << Encryption << "\n";
    std::cout << "Decryoted: " << Descryption << "\n";

    system("pause");
    return 0;
}