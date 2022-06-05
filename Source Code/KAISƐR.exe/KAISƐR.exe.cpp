#include <Windows.h>
static ULONGLONG r, n;
int randy() { return n = r, n ^= 0x8ebf635bee3c6d25, n ^= n << 5 | n >> 26, n *= 0xf3e05ca5c43e376b, r = n, n & 0x7fffffff; }
#include <iostream>
#include <stdlib.h>
#define M_PI 3.14159265358979323846
#pragma comment (lib, "Winmm.lib")
#include <mmsystem.h>
#include "MMSystem.h"
#include <cmath>
#define _USE_MATH_DEFINES 1
#define RGBBRUSH (DWORD)0x1900ac010e
using namespace std;
#define getrandom time(NULL)
#include <time.h>
#pragma comment(lib, "Msimg32.lib")
#include <magnification.h>
#include <conio.h>

VOID WINAPI sound1() { //baitbeat
    HWAVEOUT hWaveOut = 0;
    WAVEFORMATEX wfx = { WAVE_FORMAT_PCM, 1, 32000, 32000, 1, 8, 0 };
    waveOutOpen(&hWaveOut, WAVE_MAPPER, &wfx, 0, 0, CALLBACK_NULL);
    char buffer[32000 * 30] = {}; // i like this
    for (DWORD t = 0; t < sizeof(buffer); ++t)
        buffer[t] = static_cast<char>(t >> 9) * (t >> 5) - t * cos(t >> 1); //cos

    WAVEHDR header = { buffer, sizeof(buffer), 0, 0, 0, 0, 0, 0 };
    waveOutPrepareHeader(hWaveOut, &header, sizeof(WAVEHDR));
    waveOutWrite(hWaveOut, &header, sizeof(WAVEHDR));
    waveOutUnprepareHeader(hWaveOut, &header, sizeof(WAVEHDR));
    waveOutClose(hWaveOut);
}
VOID WINAPI sound2() {
    HWAVEOUT hWaveOut = 0;
    WAVEFORMATEX wfx = { WAVE_FORMAT_PCM, 1, 32000, 32000, 1, 8, 0 };
    waveOutOpen(&hWaveOut, WAVE_MAPPER, &wfx, 0, 0, CALLBACK_NULL);
    char buffer[32000 * 30] = {};
    for (DWORD t = 0; t < sizeof(buffer); ++t)
        buffer[t] = static_cast<char>(t >> 8) * (t >> 4) + t * (t >> 3); //helicopter cum

    WAVEHDR header = { buffer, sizeof(buffer), 0, 0, 0, 0, 0, 0 };
    waveOutPrepareHeader(hWaveOut, &header, sizeof(WAVEHDR));
    waveOutWrite(hWaveOut, &header, sizeof(WAVEHDR));
    waveOutUnprepareHeader(hWaveOut, &header, sizeof(WAVEHDR));
    waveOutClose(hWaveOut);
}
VOID WINAPI sound3() {
    HWAVEOUT hWaveOut = 0;
    WAVEFORMATEX wfx = { WAVE_FORMAT_PCM, 1, 32000, 32000, 1, 8, 0 };
    waveOutOpen(&hWaveOut, WAVE_MAPPER, &wfx, 0, 0, CALLBACK_NULL);
    char buffer[32000 * 15] = {};
    for (DWORD t = 0; t < sizeof(buffer); ++t)
        buffer[t] = static_cast<char>(t >> 1) * (t >> 0) - t * (t >> 6); // wtf

    WAVEHDR header = { buffer, sizeof(buffer), 0, 0, 0, 0, 0, 0 };
    waveOutPrepareHeader(hWaveOut, &header, sizeof(WAVEHDR));
    waveOutWrite(hWaveOut, &header, sizeof(WAVEHDR));
    waveOutUnprepareHeader(hWaveOut, &header, sizeof(WAVEHDR));
    waveOutClose(hWaveOut);
}
VOID WINAPI sound4() {
    HWAVEOUT hWaveOut = 0;
    WAVEFORMATEX wfx = { WAVE_FORMAT_PCM, 1, 32000, 32000, 1, 8, 0 };
    waveOutOpen(&hWaveOut, WAVE_MAPPER, &wfx, 0, 0, CALLBACK_NULL);
    char buffer[32000 * 25] = {};
    for (DWORD t = 0; t < sizeof(buffer); ++t)
        buffer[t] = static_cast<char>(t >> 6) * (t >> 8) + t * (t >> 9); // lolz

    WAVEHDR header = { buffer, sizeof(buffer), 0, 0, 0, 0, 0, 0 };
    waveOutPrepareHeader(hWaveOut, &header, sizeof(WAVEHDR));
    waveOutWrite(hWaveOut, &header, sizeof(WAVEHDR));
    waveOutUnprepareHeader(hWaveOut, &header, sizeof(WAVEHDR));
    waveOutClose(hWaveOut);
}
VOID WINAPI sound5() {
    HWAVEOUT hWaveOut = 0;
    WAVEFORMATEX wfx = { WAVE_FORMAT_PCM, 1, 32000, 32000, 1, 8, 0 };
    waveOutOpen(&hWaveOut, WAVE_MAPPER, &wfx, 0, 0, CALLBACK_NULL);
    char buffer[32000 * 25] = {};
    for (DWORD t = 0; t < sizeof(buffer); ++t)
        buffer[t] = static_cast<char>(t >> 6) * (t >> 6) - t * (t >> 6); //nosund

    WAVEHDR header = { buffer, sizeof(buffer), 0, 0, 0, 0, 0, 0 };
    waveOutPrepareHeader(hWaveOut, &header, sizeof(WAVEHDR));
    waveOutWrite(hWaveOut, &header, sizeof(WAVEHDR));
    waveOutUnprepareHeader(hWaveOut, &header, sizeof(WAVEHDR));
    waveOutClose(hWaveOut);
}
VOID WINAPI sound6() {
    HWAVEOUT hWaveOut = 0;
    WAVEFORMATEX wfx = { WAVE_FORMAT_PCM, 1, 32000, 32000, 1, 8, 0 };
    waveOutOpen(&hWaveOut, WAVE_MAPPER, &wfx, 0, 0, CALLBACK_NULL);
    char buffer[32000 * 15] = {};
    for (DWORD t = 0; t < sizeof(buffer); ++t)
        buffer[t] = static_cast<char>(t >> 0) * (t >> 1) + t * (t >> 4); // fuck

    WAVEHDR header = { buffer, sizeof(buffer), 0, 0, 0, 0, 0, 0 };
    waveOutPrepareHeader(hWaveOut, &header, sizeof(WAVEHDR));
    waveOutWrite(hWaveOut, &header, sizeof(WAVEHDR));
    waveOutUnprepareHeader(hWaveOut, &header, sizeof(WAVEHDR));
    waveOutClose(hWaveOut);
}
VOID WINAPI sound7() {
    HWAVEOUT hWaveOut = 0;
    WAVEFORMATEX wfx = { WAVE_FORMAT_PCM, 1, 32000, 32000, 1, 8, 0 };
    waveOutOpen(&hWaveOut, WAVE_MAPPER, &wfx, 0, 0, CALLBACK_NULL);
    char buffer[32000 * 25] = {};
    for (DWORD t = 0; t < sizeof(buffer); ++t)
        buffer[t] = static_cast<char>((t >> 88)) ^ (959887476 & t) ^ (7879 & t) - t / 16;

    WAVEHDR header = { buffer, sizeof(buffer), 0, 0, 0, 0, 0, 0 };
    waveOutPrepareHeader(hWaveOut, &header, sizeof(WAVEHDR));
    waveOutWrite(hWaveOut, &header, sizeof(WAVEHDR));
    waveOutUnprepareHeader(hWaveOut, &header, sizeof(WAVEHDR));
    waveOutClose(hWaveOut);
}
VOID WINAPI sound8() {
    HWAVEOUT hWaveOut = 0;
    WAVEFORMATEX wfx = { WAVE_FORMAT_PCM, 1, 32000, 32000, 1, 8, 0 };
    waveOutOpen(&hWaveOut, WAVE_MAPPER, &wfx, 0, 0, CALLBACK_NULL);
    char buffer[32000 * 25] = {};
    for (DWORD t = 0; t < sizeof(buffer); ++t)
        buffer[t] = static_cast<char>(t >> 1 | t >> 3 | t >> 1 | t >> 1 | t * 2 | t >> 1 | t * 8);

    WAVEHDR header = { buffer, sizeof(buffer), 0, 0, 0, 0, 0, 0 };
    waveOutPrepareHeader(hWaveOut, &header, sizeof(WAVEHDR));
    waveOutWrite(hWaveOut, &header, sizeof(WAVEHDR));
    waveOutUnprepareHeader(hWaveOut, &header, sizeof(WAVEHDR));
    waveOutClose(hWaveOut);
}
VOID WINAPI sound9() {
    HWAVEOUT hWaveOut = 0;
    WAVEFORMATEX wfx = { WAVE_FORMAT_PCM, 1, 32000, 32000, 1, 8, 0 };
    waveOutOpen(&hWaveOut, WAVE_MAPPER, &wfx, 0, 0, CALLBACK_NULL);
    char buffer[32000 * 20] = {};
    for (DWORD t = 0; t < sizeof(buffer); ++t)
        buffer[t] = static_cast<char>((t >> 1)) ^ (1 & t);

    WAVEHDR header = { buffer, sizeof(buffer), 0, 0, 0, 0, 0, 0 };
    waveOutPrepareHeader(hWaveOut, &header, sizeof(WAVEHDR));
    waveOutWrite(hWaveOut, &header, sizeof(WAVEHDR));
    waveOutUnprepareHeader(hWaveOut, &header, sizeof(WAVEHDR));
    waveOutClose(hWaveOut);
}
VOID WINAPI sound10() {
    HWAVEOUT hWaveOut = 0;
    WAVEFORMATEX wfx = { WAVE_FORMAT_PCM, 1, 32000, 32000, 1, 8, 0 };
    waveOutOpen(&hWaveOut, WAVE_MAPPER, &wfx, 0, 0, CALLBACK_NULL);
    char buffer[32000 * 20] = {};
    for (DWORD t = 0; t < sizeof(buffer); ++t)
        buffer[t] = static_cast<char>((t >> 1)) ^ (1 & t) ^ (1 & t) - t / 9 | t * 29 | t * 7 | t >> 2;

    WAVEHDR header = { buffer, sizeof(buffer), 0, 0, 0, 0, 0, 0 };
    waveOutPrepareHeader(hWaveOut, &header, sizeof(WAVEHDR));
    waveOutWrite(hWaveOut, &header, sizeof(WAVEHDR));
    waveOutUnprepareHeader(hWaveOut, &header, sizeof(WAVEHDR));
    waveOutClose(hWaveOut);
}

DWORD WINAPI RotScreen(LPVOID lpParam) // skidded rotate screen code
{
    while (1)
    {
        int width, height;

        HWND hwnd;
        width = GetSystemMetrics(SM_CXSCREEN);
        height = GetSystemMetrics(SM_CYSCREEN);
        hwnd = GetDesktopWindow();    HDC hdc = GetDC(NULL);
        RECT rekt;
        GetWindowRect(hwnd, &rekt);
        HBRUSH rainbow = CreateSolidBrush(RGB(rand() % 255, rand() % 255, rand() % 255));
        SelectObject(hdc, rainbow);
        int xyrng = rand() % width, h = height - rand() % width - (width / 2 - 110);

        POINT pt3[3];
        int inc3 = 60;
        inc3++;
        pt3[0].x = rekt.left + inc3;
        pt3[0].y = rekt.top - inc3;
        pt3[1].x = rekt.right + inc3;
        pt3[1].y = rekt.top + inc3;
        pt3[2].x = rekt.left - inc3;
        pt3[2].y = rekt.bottom - inc3;

        PlgBlt(hdc, pt3, hdc, rekt.left, rekt.top, rekt.right - rekt.left, rekt.bottom - rekt.top, NULL, NULL, NULL);
        PlgBlt(hdc, pt3, hdc, rekt.left, rekt.top, rekt.right - rekt.left, rekt.bottom - rekt.top, NULL, NULL, NULL);
        StretchBlt(hdc, -16, -16, width + 32, height + 32, hdc, NULL, NULL, width, height, SRCCOPY);
        StretchBlt(hdc, 16, 16, width - 32, height - 32, hdc, NULL, NULL, width, height, SRCCOPY);
        PlgBlt(hdc, pt3, hdc, rekt.left, rekt.top, rekt.right - rekt.left, rekt.bottom - rekt.top, NULL, NULL, NULL);
        PlgBlt(hdc, pt3, hdc, rekt.left, rekt.top, rekt.right - rekt.left, rekt.bottom - rekt.top, NULL, NULL, NULL);
        StretchBlt(hdc, -16, -16, width + 32, height + 32, hdc, NULL, NULL, width, height, SRCCOPY);
        StretchBlt(hdc, 16, 16, width - 32, height - 32, hdc, NULL, NULL, width, height, SRCCOPY);
        PlgBlt(hdc, pt3, hdc, rekt.left, rekt.top, rekt.right - rekt.left, rekt.bottom - rekt.top, NULL, NULL, NULL);
        PlgBlt(hdc, pt3, hdc, rekt.left, rekt.top, rekt.right - rekt.left, rekt.bottom - rekt.top, NULL, NULL, NULL);
        StretchBlt(hdc, -16, -16, width + 32, height + 32, hdc, NULL, NULL, width, height, SRCCOPY);
        StretchBlt(hdc, 16, 16, width - 32, height - 32, hdc, NULL, NULL, width, height, SRCCOPY);
        PlgBlt(hdc, pt3, hdc, rekt.left, rekt.top, rekt.right - rekt.left, rekt.bottom - rekt.top, NULL, NULL, NULL);
        PlgBlt(hdc, pt3, hdc, rekt.left, rekt.top, rekt.right - rekt.left, rekt.bottom - rekt.top, NULL, NULL, NULL);
        StretchBlt(hdc, -16, -16, width + 32, height + 32, hdc, NULL, NULL, width, height, SRCCOPY);
        StretchBlt(hdc, 16, 16, width - 32, height - 32, hdc, NULL, NULL, width, height, SRCCOPY);
    }
}


DWORD WINAPI PIXELR(LPVOID lpParam) // RGB Glitches skidded
{
    HDC HDC = GetDC(0);
    int sw = GetSystemMetrics(0);
    int sh = GetSystemMetrics(1);
    while (true)
    {
        int a = rand() % sw;
        int b = rand() % sh;
        BitBlt(HDC, a, b, 500, 500, HDC, a + rand() % sw % 51 - 20, b + rand() % sh % 51 - 20, SRCCOPY);
    }
}

DWORD WINAPI waves(LPVOID lpParam) // like melting, but horizontal
{
    int v4;
    int y;
    int v6;
    int v7;
    HDC hdc;
    hdc = GetDC(0i64);
    while (1)
    {
        v7 = GetSystemMetrics(1);
        v6 = GetSystemMetrics(0);
        y = rand() % v7;
        v4 = rand() % 5;
        if (v4)
        {
            if (v4 == 1)
                BitBlt(hdc, 0, y, v6, 15, hdc, 1, y, 0xCC0020u);
        }
        else
        {
            BitBlt(hdc, 1, y, v6, 15, hdc, 0, y, 0xCC0020u);
        }
    }
}

DWORD WINAPI Rotate(LPVOID lpvd)
{
    HDC HDC = GetDC(0); // converted from my python trojan to cpp
    int x = GetSystemMetrics(0);
    int y = GetSystemMetrics(1);
    while (1)
    {
        StretchBlt(HDC, x, 0, -x, y, HDC, 0, 0, x, y, SRCCOPY);
        StretchBlt(HDC, 0, y, x, -y, HDC, 0, 0, x, y, SRCCOPY);
        Sleep(100);
    }
}

DWORD WINAPI puzzle(LPVOID lpvd) // my own screenpuzzle code
{
    HDC HDC = GetDC(0);
    int screenW = GetSystemMetrics(0);
    int screenH = GetSystemMetrics(1);
    int blockW = 100;
    int blockH = 100;
    while (true)
    {
        int x = rand() % (screenW - blockW);
        int y = rand() % (screenH - blockH);

        BitBlt(HDC, rand() % (-100, 101), y, screenW, blockH, HDC, 0, y, NOTSRCCOPY);
        BitBlt(HDC, x, rand() % (-100, 101), blockW, screenH, HDC, x, 0, NOTSRCCOPY);
        Sleep(150);
    }
}

DWORD WINAPI BlurPaint(LPVOID lpvd) // blures the screen
{
    HDC hdc;
    int w = GetSystemMetrics(0);
    int h = GetSystemMetrics(1);
    while (1) {
        hdc = GetDC(0);
        BitBlt(hdc, rand() % 2, rand() % 2, w, h, hdc, rand() % 2, rand() % 2, SRCPAINT);
        Sleep(10);
    }
}

DWORD WINAPI audiobeep(LPVOID lpParam) // beeps
{
    int t = 50;
    while (true)
    {
        Beep(500, 50);
        Sleep(t);
        Beep(1000, 50);
        Sleep(t);
        Beep(1500, 50);
        Sleep(t);
        Beep(2000, 50);
        Sleep(t);
    }
}

DWORD WINAPI WindowMover(LPVOID lpParam) // skidded really dangerous code!!!
{
    HWND wnd;
    RECT rect;
    double ang = 0;
    int x, y;
    while (1) {
        wnd = GetForegroundWindow();
        x = sin(ang) * 5, y = cos(ang) * 5;
        GetWindowRect(wnd, &rect);
        int width = rect.right - rect.left;
        int height = rect.bottom - rect.top;
        MoveWindow(wnd, rect.left + x, rect.top + y, width, height, true);
        ang = fmod(ang + M_PI * 64.f, M_PI * 2);
        Sleep(1);
    }
}

DWORD WINAPI RGB1(LPVOID lpParam) // RGB FLICKER
{
    HDC hdc = 0;
    int sx = 0, sy = 0;
    int rx = 0, ry = 0;

    while (1)
    {
        hdc = GetWindowDC(GetDesktopWindow());
        sx = GetSystemMetrics(SM_CXSCREEN);
        sy = GetSystemMetrics(SM_CYSCREEN);
        rx = rand() % sx;
        ry = rand() % sy;
        SelectObject(hdc, CreateSolidBrush(RGB(rand() % 225, rand() % 225, rand() % 225)));
        PatBlt(hdc, 0, 0, sx, sy, PATINVERT);
        Sleep(10);
    }
}

DWORD WINAPI RGB2(LPVOID lpvd) // RGB WAVE
{
    HWND v3;
    HBITMAP h;
    HDC hdcSrc;
    HDC hdc;
    void* lpvBits;
    int nHeight;
    int nWidth;
    DWORD v12;
    int j;
    int v14;
    int i;
    v12 = GetTickCount();
    nWidth = GetSystemMetrics(0);
    nHeight = GetSystemMetrics(1);
    lpvBits = VirtualAlloc(0, 4 * nWidth * (nHeight + 1), 0x3000u, 4u);
    for (i = 0; ; i = (i + 1) % 2)
    {
        hdc = GetDC(0);
        hdcSrc = CreateCompatibleDC(hdc);
        h = CreateBitmap(nWidth, nHeight, 1u, 0x20u, lpvBits);
        SelectObject(hdcSrc, h);
        BitBlt(hdcSrc, 0, 0, nWidth, nHeight, hdc, 0, 0, 0xCC0020u);
        GetBitmapBits(h, 4 * nHeight * nWidth, lpvBits);
        v14 = 0;
        if (GetTickCount() - v12 > 0xA)
            rand();
        for (j = 0; nHeight * nWidth > j; ++j)
        {
            if (!(j % nHeight) && !(rand() % 110))
                v14 = rand() % 24;
            *((BYTE*)lpvBits + 4 * j + v14) -= 5;
        }
        SetBitmapBits(h, 4 * nHeight * nWidth, lpvBits);
        BitBlt(hdc, 0, 0, nWidth, nHeight, hdcSrc, 0, 0, 0xCC0020u);
        DeleteObject(h);
        DeleteObject(hdcSrc);
        DeleteObject(hdc);
    }
}

DWORD WINAPI pixelfun(LPVOID lpParam) // pixelfun
{
    while (1) {
        HDC hdc = GetDC(0);
        int x = SM_CXSCREEN;
        int y = SM_CYSCREEN;
        int w = GetSystemMetrics(0);
        int h = GetSystemMetrics(1);
        BitBlt(hdc, rand() % 222, rand() % 222, w, h, hdc, rand() % 222, rand() % 222, NOTSRCCOPY);
        Sleep(10);
    }
}

DWORD WINAPI minigamewave(LPVOID lpParam)
{
    HDC desk = GetDC(NULL);
    int sw = GetSystemMetrics(SM_CXSCREEN);
    int sh = GetSystemMetrics(SM_CYSCREEN);
    while (true)
    {
        desk = GetDC(NULL);
        POINT p;
        GetCursorPos(&p);
        BitBlt(desk, -50, 5, sw, sh, desk, rand() % 10, rand() % 10, SRCCOPY);
        DrawIcon(desk, p.x, p.y, LoadIcon(0, IDI_ERROR));
    }
}

DWORD WINAPI pixelswipe(LPVOID lpParam)
{
    while (true)
    {
        HDC desk = GetDC(0);
        int ScrW = GetSystemMetrics(SM_CXSCREEN), ScrM = GetSystemMetrics(SM_CYSCREEN);
        POINT wPt[3];
        RECT wRect;
        GetWindowRect(GetDesktopWindow(), &wRect);
        int p = 100;

        wPt[0].x = wRect.left - 50;
        wPt[0].y = wRect.top;
        wPt[1].x = wRect.right - 50;
        wPt[1].y = wRect.top;
        wPt[2].x = wRect.left;
        wPt[2].y = wRect.bottom;

        PlgBlt(desk, wPt, desk, wRect.left, wRect.top, wRect.right, wRect.bottom, 0, 0, 0);
        Sleep(5);
    }
}

DWORD WINAPI Icons(LPVOID lpvd)
{
    int ix = GetSystemMetrics(0);
    int iy = GetSystemMetrics(1);

    HDC hdc = GetDC(0);
    while (true)
    {
        DrawIcon(hdc, rand() % ix, rand() % iy, LoadIcon(NULL, IDI_SHIELD));
        Sleep(10);
    }
}

DWORD WINAPI tunnel(LPVOID lpParam) 
{
    HDC hWindow;
    HDC hDsktp;
    HWND hWnd;
    RECT wRect;
    int dX = 0;
    int dY = 0;
    int dW;
    int dH;
    POINT wPt[3];
    int counter = 30;

    while (true)
    {

        hWnd = GetDesktopWindow();
        hWindow = GetWindowDC(hWnd);
        hDsktp = GetDC(0);
        GetWindowRect(hWnd, &wRect);

        dW = GetSystemMetrics(0);
        dH = GetSystemMetrics(0);

        wPt[0].x = wRect.left + counter;
        wPt[0].y = wRect.top + counter;
        wPt[1].x = wRect.right - counter;
        wPt[1].y = wRect.top;
        wPt[2].x = wRect.left + counter;
        wPt[2].y = wRect.bottom - counter;

        PlgBlt(hDsktp, wPt, hDsktp, wRect.left, wRect.top, wRect.right - wRect.left, wRect.bottom - wRect.top, 0, 0, 0);
    }
}

DWORD WINAPI MSGLOOP(LPVOID lpvd)
{
    while (true)
    {
        MessageBoxW(NULL, L"ĦŽPèy×‰xþɇƱƀEMø‰xþÿÿƒ½xþÿÿÀ‰Pÿ‹ǥɈ", L"KAISƐR", MB_YESNOCANCEL | MB_ICONWARNING);
        {
            MessageBoxW(NULL, L"ℲDɍþÿÃUþÿÿþÿRþÿQ#þìƒÄÜôǥþÿRð", L"KAISƐR", MB_YESNOCANCEL | MB_ICONERROR);
        }
    }
}

int main(HINSTANCE(a), HINSTANCE(b), LPSTR(c), int(d))
{
    ShowWindow(GetConsoleWindow(), SW_HIDE); // To hide console Window
    //const wchar_t* file = L"D:\\NotPetyaWL.jpg";
    //SystemParametersInfoW(SPI_SETDESKWALLPAPER, 0, (void*)file, SPIF_UPDATEINIFILE);
    if (MessageBoxW(NULL, L"Would you like to run this Malware? Y/N", L"KAISƐR", MB_YESNO | MB_ICONEXCLAMATION) == IDNO)
    {
        ExitProcess(0);
    }
    else
    {
        if (MessageBoxW(NULL, L"THIS IS THE LAST WARNING! THE CREATOR IS NOT RESPONSIBLE FOR ANY DAMAGE MADE USING THIS MALWARE! STILL EXECUTE IT?", L"KAISƐR", MB_YESNO | MB_ICONEXCLAMATION) == IDNO)
        {
            ExitProcess(0);
        }
        else
        {
            ShellExecuteA(NULL, "open", "https://www.youtube.com/watch?v=dQw4w9WgXcQ", NULL, NULL, SW_HIDE); // RICKROLL
            //sound8();
            //CreateThread(0, 0, RGB1, 0, 0, 0); // PAINT FLICKER
            //CreateThread(0, 0, RGB2, 0, 0, 0); // SLOW GRADIENT
            CreateThread(0, 0, MSGLOOP ,0, 0, 0);
            Sleep(10000);

            HANDLE thread1;
            thread1 = CreateThread(0, 0, waves, 0, 0, 0);
            HANDLE thread15;
            thread15 = CreateThread(0, 0, Icons, 0, 0, 0);
            sound6();
            Sleep(15000);

            TerminateThread(thread1, 0);
            TerminateThread(thread15, 0);
            HANDLE thread9;
            thread9 = CreateThread(0, 0, BlurPaint, 0, 0, 0);
            HANDLE thread8;
            thread8 = CreateThread(0, 0, audiobeep, 0, 0, 0);
            Sleep(15000);

            TerminateThread(thread8, NULL);
            TerminateThread(thread9, NULL);
            sound7();
            HANDLE thread10;
            thread10 = CreateThread(0, 0, RotScreen, 0, 0, 0);
            HANDLE thread5;
            thread5 = CreateThread(0, 0, RGB1, 0, 0, 0);
            Sleep(25000);

            TerminateThread(thread10, NULL);
            TerminateThread(thread5, NULL);
            sound8();
            HANDLE thread3;
            thread3 = CreateThread(0, 0, minigamewave, 0, 0, 0);
            HANDLE thread11;
            thread11 = CreateThread(0, 0, Rotate, 0, 0, 0);
            Sleep(25000);

            TerminateThread(thread11, NULL);
            TerminateThread(thread3, NULL);
            sound9();
            HANDLE thread4;
            thread4 = CreateThread(0, 0, pixelfun, 0, 0, 0);
            Sleep(16500);

            TerminateThread(thread4, NULL);
            sound2();
            HANDLE thread20;
            thread20 = CreateThread(0, 0, PIXELR, 0, 0, 0);
            Sleep(15000);

            TerminateThread(thread20, NULL);
            sound8();
            HANDLE thread13;
            thread13 = CreateThread(0, 0, puzzle, 0, 0, 0);
            HANDLE thread21;
            thread21 = CreateThread(0, 0, RGB2, 0, 0, 0);
            Sleep(15000);

            TerminateThread(thread13, NULL);         
            TerminateThread(thread21, NULL);
            sound3();
            HANDLE thread6;
            thread6 = CreateThread(0, 0, RGB1, 0, 0, 0);
            HANDLE thread12;
            thread12 = CreateThread(0, 0, tunnel, 0, 0, 0);
            Sleep(15000);

            TerminateThread(thread6, NULL);
            TerminateThread(thread12, NULL);
            MessageBoxW(NULL, L"YOU ARE GAY!", L"KAISƐR", MB_OK | MB_ICONINFORMATION);
        }
    }
}