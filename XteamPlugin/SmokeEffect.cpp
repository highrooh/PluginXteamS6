#include "StdAfx.h"
#include "SmokeEffect.h"
#include "ToolKit.h"
#include "Offset.h"
#include "Defines.h"


DWORD pItemType = 0;






__declspec(naked) void SetItemEffect()
{
   __asm
   {
      Mov pItemType, Eax
   }

   switch (pItemType)
   {
   case ITEM2(11, 29):   // Dragon Knight
   case ITEM2(11, 30):   // Venom 
   case ITEM2(11, 31):   // Sylphid
   case ITEM2(11, 32):   // Volcano
   case ITEM2(11, 33):   // Sunlight
   case ITEM2(11, 1):   // Dragon 
   case ITEM2(11, 3):   // Legendary
   case ITEM2(11, 17):   // Dark Phoenix
   case ITEM2(11, 46):   // Brave s4
   case ITEM2(11, 6):   // Scale
   case ITEM2(11, 2):   // Pad
   case ITEM2(11, 5):   // Leather
   case ITEM2(11, 9):   // Plate
   case ITEM2(11, 10):   // Vine
   case ITEM2(11,11):   // Silk
   case ITEM2(11,12):   // Wind
   case ITEM2(11,13):   // Spirit
   case ITEM2(11,19):   // Divine
   case ITEM2(11,21):   // Gread Dragon
   case ITEM2(11,24):   // Red Spirit
   case ITEM2(11,25):   // Light Plate
   case ITEM2(11,28):   // Dark Master
   case ITEM2(11,36):   // Iris
   case ITEM2(11,38):   // Glorious
   case ITEM2(11,39):   // Mistery
   case ITEM2(11,40):   // Red Wing
   case ITEM2(11,41):   // Ancient
   case ITEM2(11,42):   // Black Rose
   case ITEM2(11,43):   // Aura
   case ITEM2(11,44):   // Lillium
   case ITEM2(11,49):   // SeraPhim
   case ITEM2(11,50):   // Faith
   case ITEM2(11,51):   // King ..Set Absolute de dl
   case ITEM2(11,53):   // Queen
   case ITEM2(11,59):   // Sacred
   case ITEM2(11,60):   // Storm
   case ITEM2(11,61):   // Piercing
   case ITEM2(11,62):   // Scale Luky
   case ITEM2(11,63):   // Silk Luky
   case ITEM2(11,64):   // Sphinx Luky
   case ITEM2(11,65):   // Wind Luky
   case ITEM2(11,66):   // Dark Soul Luky
   case ITEM2(11,67):   // Dragon Luky
   case ITEM2(11,68):   // Guardian Luky
   case ITEM2(11,69):   // Legendary Luky
   case ITEM2(11,70):   // Red Wing Luky
   case ITEM2(11,72):   // Storm Hard Luky
   case ITEM2(11,73):   // Phoenix Soul
   case ITEM2(11,75):   // Awakening Soul
   case ITEM2(11,76):   // Embisyeon
   case ITEM2(11,77):   // Alpha Dragon
   case ITEM2(11,78):   // Canty Ejecutor
   case ITEM2(11,79):   // Chaos
   case ITEM2(11,80):   // Platinum
   case ITEM2(11,81):   // Lord Destruction
   case ITEM2(11,82):   // Lord Pentium
   case ITEM2(11,83):   // Darkness
   case ITEM2(11,84):   // Lord Rimbros
   case ITEM2(11,85):   // NightMare
   case ITEM2(11,86):   // Awakening Soul Magic Lord
   case ITEM2(11,87):   //  Awakening Soul Fairy
   case ITEM2(11,89):   //  StormWing
   case ITEM2(11,90):   //  Holy Angel Kinght
   case ITEM2(11,92):   //  Blood Thirsty
   case ITEM2(11,93):   //  Dark Angel Knight
   case ITEM2(11,94):   //  Imperion Dragon
   case ITEM2(11,95):   //  Dark Angel Lord
   case ITEM2(11,96):   //  Dark Angel Magic
   case ITEM2(11,97):   //  Dark Angel Fairy
   case ITEM2(11,98):   //  Holy Angel Magic Lord
   case ITEM2(11,99):   //  Holy Angel Fayry
   case ITEM2(11,100):   //  Warrior Gold
   case ITEM2(11,101):   //  Imperion Black Dragon
   case ITEM2(11,102):   //  Shimmering
   case ITEM2(11,4):   //  Bone set de sm
   case ITEM2(11,7):   //  Sphinx
   case ITEM2(11,8):   //  Brass
   case ITEM2(11,14):   //  Guardin
   case ITEM2(11,15):   //  Storm Crow Set De Mg
   case ITEM2(11,16):   //  Black Dragon
   case ITEM2(11,18):   //  Grand Soul
   case ITEM2(11,20):   // Thunder Hawk
   case ITEM2(11,22):   // Dark Soul
   case ITEM2(11,23):   // Hurricane
   case ITEM2(11,26):   // Adamantine
   case ITEM2(11,27):   // Dark Steel
   case ITEM2(11,34):   // AshCrow
   case ITEM2(11,35):   // Eclipse
   case ITEM2(11,37):   //Valiant
   case ITEM2(11,45):   // Titan
   case ITEM2(11,47):   // Phantom
   case ITEM2(11,48):  //DESTROYER
   case ITEM2(11,52):  //Hades
   case ITEM2(11,71):  // Atlans Luky
   case ITEM2(11,88):  // Hell Knight
   case ITEM2(11,91):  // Magic Knight


      {
       __asm
       {
        Mov Esi, HDK_ITEM_EFFECT_ALLOW
          JMP Esi
       }
      }
break;
}


__asm
{
Mov Esi, HDK_ITEM_EFFECT_NOT_ALLOW
JMP Esi
}
}


__declspec(naked) void SetColorEffect()
{
__asm
{
Mov pItemType, Ecx
}




switch (pItemType)
   {
      // Dragon Knight
   case ITEM2(11, 29):
      __asm
      {
         MOV EDX, DWORD PTR SS : [EBP + 0xC]
MOV DWORD PTR DS : [EDX + 0x9C], 0x3F266666 //Red Color Value
MOV EAX, DWORD PTR SS : [EBP + 0xC]
MOV DWORD PTR DS : [EAX + 0xA0], 0 //Green Color Value
MOV ECX, DWORD PTR SS : [EBP + 0xC]
MOV DWORD PTR DS : [ECX + 0xA4], 0  //Blue Color Value



      }
      break;

      // Venom
   case ITEM2(11, 30):
      __asm
      {
         Mov Ecx, DWord Ptr Ss:[Ebp + 0xC]
         Mov DWord Ptr Ds:[Ecx + 0x9C], 0x3DCCCCCD
         Mov Edx, DWord Ptr Ss:[Ebp + 0xC]
         Mov DWord Ptr Ds:[Edx + 0xA0], 0x3DCCCCCD
         Mov Eax, DWord Ptr Ss:[Ebp + 0xC]
         Mov DWord Ptr Ds:[Eax + 0xA4], 0x3F666666
      }
      break;

      // Sylphid
   case ITEM2(11, 31):
      __asm
      {
          Mov Ecx, DWord Ptr Ss:[Ebp + 0xC]
         Mov DWord Ptr Ds:[Ecx + 0x9C], 0x3F000000
         Mov Edx, DWord Ptr Ss:[Ebp + 0xC]
         Mov DWord Ptr Ds:[Edx + 0xA0], 0x3E75C28F
         Mov Eax, DWord Ptr Ss:[Ebp + 0xC]
         Mov DWord Ptr Ds:[Eax + 0xA4], 0x3F4CCCCD
      }
      break;

      // Volcano
   case ITEM2(11, 32):
      __asm
      {
         Mov Ecx, DWord Ptr Ss:[Ebp + 0xC]
         Mov DWord Ptr Ds:[Ecx + 0x9C], 0x3F000000
         Mov Edx, DWord Ptr Ss:[Ebp + 0xC]
         Mov DWord Ptr Ds:[Edx + 0xA0], 0x3E75C28F
         Mov Eax, DWord Ptr Ss:[Ebp + 0xC]
         Mov DWord Ptr Ds:[Eax + 0xA4], 0x3F4CCCCD
      }
      break;

      // Sunlight
   case ITEM2(11, 33):
      __asm
      {
         Mov Ecx, DWord Ptr Ss:[Ebp + 0xC]
         Mov DWord Ptr Ds:[Ecx + 0x9C], 0x3F19999A
         Mov Edx, DWord Ptr Ss:[Ebp + 0xC]
         Mov DWord Ptr Ds:[Edx + 0xA0], 0x3ECCCCCD
         Mov Eax, DWord Ptr Ss:[Ebp + 0xC]
         Mov DWord Ptr Ds:[Eax + 0xA4], 0
      }
      break;

      // Dragon
   case ITEM2(11, 1):
      __asm
      {
         MOV ECX, DWORD PTR SS:[EBP + 0xC]
         MOV DWORD PTR DS:[ECX + 0x9C], 0x3f800000
         MOV EDX, DWORD PTR SS:[EBP + 0xC]
         MOV DWORD PTR DS:[EDX + 0xA0], 0
         MOV EAX, DWORD PTR SS:[EBP + 0xC]
         MOV DWORD PTR DS:[EAX + 0xA4], 0
      }
      break;

      // Legendary
   case ITEM2(11, 3):
      __asm
      {
         MOV ECX, DWORD PTR SS:[EBP + 0xC]
         MOV DWORD PTR DS:[ECX + 0x9C], 0x3dcac083
         MOV EDX, DWORD PTR SS:[EBP + 0xC]
         MOV DWORD PTR DS:[EDX + 0xA0], 0x3eeb4396
         MOV EAX, DWORD PTR SS:[EBP + 0xC]
         MOV DWORD PTR DS:[EAX + 0xA4], 0x3f666666
      }
      break;

	  // Dark Phoenix
   case ITEM2(11, 17):
      __asm
      {
         MOV ECX, DWORD PTR SS:[EBP + 0xC]
         MOV DWORD PTR DS:[ECX + 0x9C], 0x3dcac083
         MOV EDX, DWORD PTR SS:[EBP + 0xC]
         MOV DWORD PTR DS:[EDX + 0xA0], 0x3eeb4396
         MOV EAX, DWORD PTR SS:[EBP + 0xC]
         MOV DWORD PTR DS:[EAX + 0xA4], 0x3f666666
      }
      break;

	   // Brave
   case ITEM2(11, 46):
      __asm
      {
         MOV ECX, DWORD PTR SS:[EBP + 0xC]
         MOV DWORD PTR DS:[ECX + 0x9C], 0x3F19999A
         MOV EDX, DWORD PTR SS:[EBP + 0xC]
         MOV DWORD PTR DS:[EDX + 0xA0], 0x3ECCCCCD
         MOV EAX, DWORD PTR SS:[EBP + 0xC]
         MOV DWORD PTR DS:[EAX + 0xA4], 0
      }
      break;

	  // Scale
   case ITEM2(11, 6):
      __asm
      {
         MOV ECX, DWORD PTR SS:[EBP + 0xC]
         MOV DWORD PTR DS:[ECX + 0x9C], 0
         MOV EDX, DWORD PTR SS:[EBP + 0xC]
         MOV DWORD PTR DS:[EDX + 0xA0], 0x3ECCCCCD
         MOV EAX, DWORD PTR SS:[EBP + 0xC]
         MOV DWORD PTR DS:[EAX + 0xA4], 0
      }
      break;

	    // Pad
   case ITEM2(11, 2):
      __asm
      {
         MOV ECX, DWORD PTR SS:[EBP + 0xC]
         MOV DWORD PTR DS:[ECX + 0x9C], 0x3F19999A
         MOV EDX, DWORD PTR SS:[EBP + 0xC]
         MOV DWORD PTR DS:[EDX + 0xA0], 0x3ECCCCCD
         MOV EAX, DWORD PTR SS:[EBP + 0xC]
         MOV DWORD PTR DS:[EAX + 0xA4], 0
      }
      break;

	  // Leather
   case ITEM2(11, 5):
      __asm
      {
         MOV ECX, DWORD PTR SS:[EBP + 0xC]
         MOV DWORD PTR DS:[ECX + 0x9C], 0x3F19999A
         MOV EDX, DWORD PTR SS:[EBP + 0xC]
         MOV DWORD PTR DS:[EDX + 0xA0], 0x3ECCCCCD
         MOV EAX, DWORD PTR SS:[EBP + 0xC]
         MOV DWORD PTR DS:[EAX + 0xA4], 0
      }
      break;

	   // Plate
   case ITEM2(11, 9):
      __asm
      {
         MOV ECX, DWORD PTR SS:[EBP + 0xC]
         MOV DWORD PTR DS:[ECX + 0x9C], 0x3dcac083
         MOV EDX, DWORD PTR SS:[EBP + 0xC]
         MOV DWORD PTR DS:[EDX + 0xA0], 0x3eeb4396
         MOV EAX, DWORD PTR SS:[EBP + 0xC]
         MOV DWORD PTR DS:[EAX + 0xA4], 0x3f666666
      }
      break;

// Vine
   case ITEM2(11, 10):
      __asm
      {
         MOV ECX, DWORD PTR SS:[EBP + 0xC]
         MOV DWORD PTR DS:[ECX + 0x9C], 0x3F19999A
         MOV EDX, DWORD PTR SS:[EBP + 0xC]
         MOV DWORD PTR DS:[EDX + 0xA0], 0x3ECCCCCD
         MOV EAX, DWORD PTR SS:[EBP + 0xC]
         MOV DWORD PTR DS:[EAX + 0xA4], 0
      }
      break;

	  // Silk
   case ITEM2(11, 11):
      __asm
      {
         MOV ECX, DWORD PTR SS:[EBP + 0xC]
         MOV DWORD PTR DS:[ECX + 0x9C], 0x3F19999A
         MOV EDX, DWORD PTR SS:[EBP + 0xC]
         MOV DWORD PTR DS:[EDX + 0xA0], 0x3ECCCCCD
         MOV EAX, DWORD PTR SS:[EBP + 0xC]
         MOV DWORD PTR DS:[EAX + 0xA4], 0
      }
      break;

	  // Wind
   case ITEM2(11, 12):
      __asm
      {
         MOV ECX, DWORD PTR SS:[EBP + 0xC]
         MOV DWORD PTR DS:[ECX + 0x9C], 0x3dcac083
         MOV EDX, DWORD PTR SS:[EBP + 0xC]
         MOV DWORD PTR DS:[EDX + 0xA0], 0x3eeb4396
         MOV EAX, DWORD PTR SS:[EBP + 0xC]
         MOV DWORD PTR DS:[EAX + 0xA4], 0x3f666666
      }
      break;

	  // Spirit
   case ITEM2(11, 13):
      __asm
      {
         MOV ECX, DWORD PTR SS:[EBP + 0xC]
         MOV DWORD PTR DS:[ECX + 0x9C], 0
         MOV EDX, DWORD PTR SS:[EBP + 0xC]
         MOV DWORD PTR DS:[EDX + 0xA0], 0x3ECCCCCD
         MOV EAX, DWORD PTR SS:[EBP + 0xC]
         MOV DWORD PTR DS:[EAX + 0xA4], 0
      }
      break;

	   // Divine
   case ITEM2(11, 19):
      __asm
      {
         Mov Ecx, DWord Ptr Ss:[Ebp + 0xC]
         Mov DWord Ptr Ds:[Ecx + 0x9C], 0x3F000000
         Mov Edx, DWord Ptr Ss:[Ebp + 0xC]
         Mov DWord Ptr Ds:[Edx + 0xA0], 0x3E75C28F
         Mov Eax, DWord Ptr Ss:[Ebp + 0xC]
         Mov DWord Ptr Ds:[Eax + 0xA4], 0x3F4CCCCD
      }
      break;

	  // Gread Dragon
   case ITEM2(11, 21):
      __asm
      {
         Mov Ecx, DWord Ptr Ss:[Ebp + 0xC]
         Mov DWord Ptr Ds:[Ecx + 0x9C], 0x3F266666
         Mov Edx, DWord Ptr Ss:[Ebp + 0xC]
         Mov DWord Ptr Ds:[Edx + 0xA0], 0
         Mov Eax, DWord Ptr Ss:[Ebp + 0xC]
         Mov DWord Ptr Ds:[Eax + 0xA4], 0
      }
      break;

	  // Red Spirit
   case ITEM2(11, 24):
      __asm
      {
         Mov Ecx, DWord Ptr Ss:[Ebp + 0xC]
         Mov DWord Ptr Ds:[Ecx + 0x9C], 0x3F266666
         Mov Edx, DWord Ptr Ss:[Ebp + 0xC]
         Mov DWord Ptr Ds:[Edx + 0xA0], 0
         Mov Eax, DWord Ptr Ss:[Ebp + 0xC]
         Mov DWord Ptr Ds:[Eax + 0xA4], 0
      }
      break;

	  // Light Plate
   case ITEM2(11, 25):
      __asm
      {
         Mov Ecx, DWord Ptr Ss:[Ebp + 0xC]
         Mov DWord Ptr Ds:[Ecx + 0x9C], 0x3DCCCCCD
         Mov Edx, DWord Ptr Ss:[Ebp + 0xC]
         Mov DWord Ptr Ds:[Edx + 0xA0], 0x3DCCCCCD
         Mov Eax, DWord Ptr Ss:[Ebp + 0xC]
         Mov DWord Ptr Ds:[Eax + 0xA4], 0x3F666666
      }
      break;

	  // Dark Maser
   case ITEM2(11, 28):
      __asm
      {
         Mov Ecx, DWord Ptr Ss:[Ebp + 0xC]
         Mov DWord Ptr Ds:[Ecx + 0x9C], 0x3DCCCCCD
         Mov Edx, DWord Ptr Ss:[Ebp + 0xC]
         Mov DWord Ptr Ds:[Edx + 0xA0], 0x3DCCCCCD
         Mov Eax, DWord Ptr Ss:[Ebp + 0xC]
         Mov DWord Ptr Ds:[Eax + 0xA4], 0x3F666666
      }
      break;

	  // Iris
   case ITEM2(11,36):
      __asm
      {
         MOV ECX, DWORD PTR SS:[EBP + 0xC]
         MOV DWORD PTR DS:[ECX + 0x9C], 0
         MOV EDX, DWORD PTR SS:[EBP + 0xC]
         MOV DWORD PTR DS:[EDX + 0xA0], 0x3ECCCCCD
         MOV EAX, DWORD PTR SS:[EBP + 0xC]
         MOV DWORD PTR DS:[EAX + 0xA4], 0
      }
      break;

	  // Glorious
   case ITEM2(11,38):
      __asm
      {
         MOV ECX, DWORD PTR SS:[EBP + 0xC]
         MOV DWORD PTR DS:[ECX + 0x9C], 0x3F19999A
         MOV EDX, DWORD PTR SS:[EBP + 0xC]
         MOV DWORD PTR DS:[EDX + 0xA0], 0x3ECCCCCD
         MOV EAX, DWORD PTR SS:[EBP + 0xC]
         MOV DWORD PTR DS:[EAX + 0xA4], 0
      }
      break;

	  // Mistery
   case ITEM2(11,39):
      __asm
      {
         MOV ECX, DWORD PTR SS:[EBP + 0xC]
         MOV DWORD PTR DS:[ECX + 0x9C], 0
         MOV EDX, DWORD PTR SS:[EBP + 0xC]
         MOV DWORD PTR DS:[EDX + 0xA0], 0x3ECCCCCD
         MOV EAX, DWORD PTR SS:[EBP + 0xC]
         MOV DWORD PTR DS:[EAX + 0xA4], 0
      }
      break;

	  // Red Wing
   case ITEM2(11, 40):
      __asm
      {
         Mov Ecx, DWord Ptr Ss:[Ebp + 0xC]
         Mov DWord Ptr Ds:[Ecx + 0x9C], 0x3F000000
         Mov Edx, DWord Ptr Ss:[Ebp + 0xC]
         Mov DWord Ptr Ds:[Edx + 0xA0], 0x3E75C28F
         Mov Eax, DWord Ptr Ss:[Ebp + 0xC]
         Mov DWord Ptr Ds:[Eax + 0xA4], 0x3F4CCCCD
      }
      break;

	  // Ancient
   case ITEM2(11, 41):
      __asm
      {
         Mov Ecx, DWord Ptr Ss:[Ebp + 0xC]
         Mov DWord Ptr Ds:[Ecx + 0x9C], 0x3F000000
         Mov Edx, DWord Ptr Ss:[Ebp + 0xC]
         Mov DWord Ptr Ds:[Edx + 0xA0], 0x3E75C28F
         Mov Eax, DWord Ptr Ss:[Ebp + 0xC]
         Mov DWord Ptr Ds:[Eax + 0xA4], 0x3F4CCCCD
      }
      break;

	  // Black Rose
   case ITEM2(11, 42):
      __asm
      {
         Mov Ecx, DWord Ptr Ss:[Ebp + 0xC]
         Mov DWord Ptr Ds:[Ecx + 0x9C], 0x3F000000
         Mov Edx, DWord Ptr Ss:[Ebp + 0xC]
         Mov DWord Ptr Ds:[Edx + 0xA0], 0x3E75C28F
         Mov Eax, DWord Ptr Ss:[Ebp + 0xC]
         Mov DWord Ptr Ds:[Eax + 0xA4], 0x3F4CCCCD
      }
      break;

	  // Aura
   case ITEM2(11, 43):
      __asm
      {
         Mov Ecx, DWord Ptr Ss:[Ebp + 0xC]
         Mov DWord Ptr Ds:[Ecx + 0x9C], 0x3F000000
         Mov Edx, DWord Ptr Ss:[Ebp + 0xC]
         Mov DWord Ptr Ds:[Edx + 0xA0], 0x3E75C28F
         Mov Eax, DWord Ptr Ss:[Ebp + 0xC]
         Mov DWord Ptr Ds:[Eax + 0xA4], 0x3F4CCCCD
      }
      break;

	  // Lillium
   case ITEM2(11, 44):
      __asm
      {
         Mov Ecx, DWord Ptr Ss:[Ebp + 0xC]
         Mov DWord Ptr Ds:[Ecx + 0x9C], 0x3F000000
         Mov Edx, DWord Ptr Ss:[Ebp + 0xC]
         Mov DWord Ptr Ds:[Edx + 0xA0], 0x3E75C28F
         Mov Eax, DWord Ptr Ss:[Ebp + 0xC]
         Mov DWord Ptr Ds:[Eax + 0xA4], 0x3F4CCCCD
      }
      break;

	  // SeraPhim
   case ITEM2(11, 49):
      __asm
      {
         Mov Ecx, DWord Ptr Ss:[Ebp + 0xC]
         Mov DWord Ptr Ds:[Ecx + 0x9C], 0x3F000000
         Mov Edx, DWord Ptr Ss:[Ebp + 0xC]
         Mov DWord Ptr Ds:[Edx + 0xA0], 0x3E75C28F
         Mov Eax, DWord Ptr Ss:[Ebp + 0xC]
         Mov DWord Ptr Ds:[Eax + 0xA4], 0x3F4CCCCD
      }
      break;

	   // Faith
   case ITEM2(11,50):
      __asm
      {
         MOV ECX, DWORD PTR SS:[EBP + 0xC]
         MOV DWORD PTR DS:[ECX + 0x9C], 0
         MOV EDX, DWORD PTR SS:[EBP + 0xC]
         MOV DWORD PTR DS:[EDX + 0xA0], 0x3ECCCCCD
         MOV EAX, DWORD PTR SS:[EBP + 0xC]
         MOV DWORD PTR DS:[EAX + 0xA4], 0
      }
      break;

	  // Set King...Absolute de dl
   case ITEM2(11,51):
      __asm
      {
         Mov Ecx, DWord Ptr Ss:[Ebp + 0xC]
         Mov DWord Ptr Ds:[Ecx + 0x9C], 0x3F266666
         Mov Edx, DWord Ptr Ss:[Ebp + 0xC]
         Mov DWord Ptr Ds:[Edx + 0xA0], 0
         Mov Eax, DWord Ptr Ss:[Ebp + 0xC]
         Mov DWord Ptr Ds:[Eax + 0xA4], 0
      }
      break;

	  // Queen
   case ITEM2(11, 53):
      __asm
      {
         Mov Ecx, DWord Ptr Ss:[Ebp + 0xC]
         Mov DWord Ptr Ds:[Ecx + 0x9C], 0x3F000000
         Mov Edx, DWord Ptr Ss:[Ebp + 0xC]
         Mov DWord Ptr Ds:[Edx + 0xA0], 0x3E75C28F
         Mov Eax, DWord Ptr Ss:[Ebp + 0xC]
         Mov DWord Ptr Ds:[Eax + 0xA4], 0x3F4CCCCD
      }
      break;

	  // Sacred
   case ITEM2(11, 59):
      __asm
      {
         Mov Ecx, DWord Ptr Ss:[Ebp + 0xC]
         Mov DWord Ptr Ds:[Ecx + 0x9C], 0x3F266666
         Mov Edx, DWord Ptr Ss:[Ebp + 0xC]
         Mov DWord Ptr Ds:[Edx + 0xA0], 0x3E99999A
         Mov Eax, DWord Ptr Ss:[Ebp + 0xC]
         Mov DWord Ptr Ds:[Eax + 0xA4], 0x3DCCCCCD
      }
      break;

	  // Storm
   case ITEM2(11, 60):
      __asm
      {
         Mov Ecx, DWord Ptr Ss:[Ebp + 0xC]
         Mov DWord Ptr Ds:[Ecx + 0x9C], 0x3F266666
         Mov Edx, DWord Ptr Ss:[Ebp + 0xC]
         Mov DWord Ptr Ds:[Edx + 0xA0], 0x3E99999A
         Mov Eax, DWord Ptr Ss:[Ebp + 0xC]
         Mov DWord Ptr Ds:[Eax + 0xA4], 0x3DCCCCCD
      }
      break;

	  // Piercing
   case ITEM2(11, 61):
      __asm
      {
          MOV ECX, DWORD PTR SS:[EBP + 0xC]
         MOV DWORD PTR DS:[ECX + 0x9C], 0
         MOV EDX, DWORD PTR SS:[EBP + 0xC]
         MOV DWORD PTR DS:[EDX + 0xA0], 0x3ECCCCCD
         MOV EAX, DWORD PTR SS:[EBP + 0xC]
         MOV DWORD PTR DS:[EAX + 0xA4], 0
      }
      break;

	  // Scale Luky
   case ITEM2(11, 62):
      __asm
      {
         Mov Ecx, DWord Ptr Ss:[Ebp + 0xC]
         Mov DWord Ptr Ds:[Ecx + 0x9C], 0x3F266666
         Mov Edx, DWord Ptr Ss:[Ebp + 0xC]
         Mov DWord Ptr Ds:[Edx + 0xA0], 0x3E99999A
         Mov Eax, DWord Ptr Ss:[Ebp + 0xC]
         Mov DWord Ptr Ds:[Eax + 0xA4], 0x3DCCCCCD
      }
      break;

	   // Silk Luky
   case ITEM2(11, 63):
      __asm
      {
         Mov Ecx, DWord Ptr Ss:[Ebp + 0xC]
         Mov DWord Ptr Ds:[Ecx + 0x9C], 0x3F266666
         Mov Edx, DWord Ptr Ss:[Ebp + 0xC]
         Mov DWord Ptr Ds:[Edx + 0xA0], 0x3E99999A
         Mov Eax, DWord Ptr Ss:[Ebp + 0xC]
         Mov DWord Ptr Ds:[Eax + 0xA4], 0x3DCCCCCD
      }
      break;

	   // Phinx Luky
   case ITEM2(11, 64):
      __asm
      {
         Mov Ecx, DWord Ptr Ss:[Ebp + 0xC]
         Mov DWord Ptr Ds:[Ecx + 0x9C], 0x3F266666
         Mov Edx, DWord Ptr Ss:[Ebp + 0xC]
         Mov DWord Ptr Ds:[Edx + 0xA0], 0x3E99999A
         Mov Eax, DWord Ptr Ss:[Ebp + 0xC]
         Mov DWord Ptr Ds:[Eax + 0xA4], 0x3DCCCCCD
      }
      break;

	   // Wind Luky
   case ITEM2(11, 65):
      __asm
      {
         Mov Ecx, DWord Ptr Ss:[Ebp + 0xC]
         Mov DWord Ptr Ds:[Ecx + 0x9C], 0x3F266666
         Mov Edx, DWord Ptr Ss:[Ebp + 0xC]
         Mov DWord Ptr Ds:[Edx + 0xA0], 0x3E99999A
         Mov Eax, DWord Ptr Ss:[Ebp + 0xC]
         Mov DWord Ptr Ds:[Eax + 0xA4], 0x3DCCCCCD
      }
      break;

	   // Dark Soul Luky
   case ITEM2(11, 66):
      __asm
      {
         Mov Ecx, DWord Ptr Ss:[Ebp + 0xC]
         Mov DWord Ptr Ds:[Ecx + 0x9C], 0x3F266666
         Mov Edx, DWord Ptr Ss:[Ebp + 0xC]
         Mov DWord Ptr Ds:[Edx + 0xA0], 0x3E99999A
         Mov Eax, DWord Ptr Ss:[Ebp + 0xC]
         Mov DWord Ptr Ds:[Eax + 0xA4], 0x3DCCCCCD
      }
      break;

	   // Dragon Luky
   case ITEM2(11, 67):
      __asm
      {
         Mov Ecx, DWord Ptr Ss:[Ebp + 0xC]
         Mov DWord Ptr Ds:[Ecx + 0x9C], 0x3F266666
         Mov Edx, DWord Ptr Ss:[Ebp + 0xC]
         Mov DWord Ptr Ds:[Edx + 0xA0], 0x3E99999A
         Mov Eax, DWord Ptr Ss:[Ebp + 0xC]
         Mov DWord Ptr Ds:[Eax + 0xA4], 0x3DCCCCCD
      }
      break;

	   // Guardin Luky
   case ITEM2(11, 68):
      __asm
      {
         Mov Ecx, DWord Ptr Ss:[Ebp + 0xC]
         Mov DWord Ptr Ds:[Ecx + 0x9C], 0x3F266666
         Mov Edx, DWord Ptr Ss:[Ebp + 0xC]
         Mov DWord Ptr Ds:[Edx + 0xA0], 0x3E99999A
         Mov Eax, DWord Ptr Ss:[Ebp + 0xC]
         Mov DWord Ptr Ds:[Eax + 0xA4], 0x3DCCCCCD
      }
      break;

	   // Legendary Luky
   case ITEM2(11, 69):
      __asm
      {
         Mov Ecx, DWord Ptr Ss:[Ebp + 0xC]
         Mov DWord Ptr Ds:[Ecx + 0x9C], 0x3F266666
         Mov Edx, DWord Ptr Ss:[Ebp + 0xC]
         Mov DWord Ptr Ds:[Edx + 0xA0], 0x3E99999A
         Mov Eax, DWord Ptr Ss:[Ebp + 0xC]
         Mov DWord Ptr Ds:[Eax + 0xA4], 0x3DCCCCCD
      }
      break;

	   // Red Wing Luky
   case ITEM2(11, 70):
      __asm
      {
         Mov Ecx, DWord Ptr Ss:[Ebp + 0xC]
         Mov DWord Ptr Ds:[Ecx + 0x9C], 0x3F266666
         Mov Edx, DWord Ptr Ss:[Ebp + 0xC]
         Mov DWord Ptr Ds:[Edx + 0xA0], 0x3E99999A
         Mov Eax, DWord Ptr Ss:[Ebp + 0xC]
         Mov DWord Ptr Ds:[Eax + 0xA4], 0x3DCCCCCD
      }
      break;

	   // Storm Hard Luky
   case ITEM2(11, 72):
      __asm
      {
         Mov Ecx, DWord Ptr Ss:[Ebp + 0xC]
         Mov DWord Ptr Ds:[Ecx + 0x9C], 0x3F266666
         Mov Edx, DWord Ptr Ss:[Ebp + 0xC]
         Mov DWord Ptr Ds:[Edx + 0xA0], 0x3E99999A
         Mov Eax, DWord Ptr Ss:[Ebp + 0xC]
         Mov DWord Ptr Ds:[Eax + 0xA4], 0x3DCCCCCD
      }
      break;

	   // Phoenix Soul
   case ITEM2(11, 73):
      __asm
      {
          MOV ECX, DWORD PTR SS:[EBP + 0xC]
         MOV DWORD PTR DS:[ECX + 0x9C], 0
         MOV EDX, DWORD PTR SS:[EBP + 0xC]
         MOV DWORD PTR DS:[EDX + 0xA0], 0x3ECCCCCD
         MOV EAX, DWORD PTR SS:[EBP + 0xC]
         MOV DWORD PTR DS:[EAX + 0xA4], 0
      }
      break;

	  // Awakening Soul Knight
   case ITEM2(11, 75):
      __asm
      {
          MOV ECX, DWORD PTR SS:[EBP + 0xC]
         MOV DWORD PTR DS:[ECX + 0x9C], 0x3f800000
         MOV EDX, DWORD PTR SS:[EBP + 0xC]
         MOV DWORD PTR DS:[EDX + 0xA0], 0
         MOV EAX, DWORD PTR SS:[EBP + 0xC]
         MOV DWORD PTR DS:[EAX + 0xA4], 0
      }
      break;

	  // EmbisYeon
   case ITEM2(11, 76):
      __asm
      {
          MOV ECX, DWORD PTR SS:[EBP + 0xC]
         MOV DWORD PTR DS:[ECX + 0x9C], 0x3dcac083
         MOV EDX, DWORD PTR SS:[EBP + 0xC]
         MOV DWORD PTR DS:[EDX + 0xA0], 0x3eeb4396
         MOV EAX, DWORD PTR SS:[EBP + 0xC]
         MOV DWORD PTR DS:[EAX + 0xA4], 0x3f666666
      }
      break;

	  // alpha dragon
   case ITEM2(11, 77):
      __asm
      {
          MOV ECX, DWORD PTR SS:[EBP + 0xC]
         MOV DWORD PTR DS:[ECX + 0x9C], 0x3f800000
         MOV EDX, DWORD PTR SS:[EBP + 0xC]
         MOV DWORD PTR DS:[EDX + 0xA0], 0
         MOV EAX, DWORD PTR SS:[EBP + 0xC]
         MOV DWORD PTR DS:[EAX + 0xA4], 0
      }
      break;

	  // Canty Ejecutor
   case ITEM2(11, 78):
      __asm
      {
          MOV ECX, DWORD PTR SS:[EBP + 0xC]
         MOV DWORD PTR DS:[ECX + 0x9C], 0x3dcac083
         MOV EDX, DWORD PTR SS:[EBP + 0xC]
         MOV DWORD PTR DS:[EDX + 0xA0], 0x3eeb4396
         MOV EAX, DWORD PTR SS:[EBP + 0xC]
         MOV DWORD PTR DS:[EAX + 0xA4], 0x3f666666
      }
      break;

	  // Chaos
   case ITEM2(11, 79):
      __asm
      {
         Mov Ecx, DWord Ptr Ss:[Ebp + 0xC]
         Mov DWord Ptr Ds:[Ecx + 0x9C], 0x3F19999A
         Mov Edx, DWord Ptr Ss:[Ebp + 0xC]
         Mov DWord Ptr Ds:[Edx + 0xA0], 0x3ECCCCCD
         Mov Eax, DWord Ptr Ss:[Ebp + 0xC]
         Mov DWord Ptr Ds:[Eax + 0xA4], 0
      }
      break;

	  // Platinum
   case ITEM2(11, 80):
      __asm
      {
          MOV ECX, DWORD PTR SS:[EBP + 0xC]
         MOV DWORD PTR DS:[ECX + 0x9C], 0x3dcac083
         MOV EDX, DWORD PTR SS:[EBP + 0xC]
         MOV DWORD PTR DS:[EDX + 0xA0], 0x3eeb4396
         MOV EAX, DWORD PTR SS:[EBP + 0xC]
         MOV DWORD PTR DS:[EAX + 0xA4], 0x3f666666
      }
      break;

	   // Lord Destruction
   case ITEM2(11, 81):
      __asm
      {
          MOV ECX, DWORD PTR SS:[EBP + 0xC]
         MOV DWORD PTR DS:[ECX + 0x9C], 0x3f800000
         MOV EDX, DWORD PTR SS:[EBP + 0xC]
         MOV DWORD PTR DS:[EDX + 0xA0], 0
         MOV EAX, DWORD PTR SS:[EBP + 0xC]
         MOV DWORD PTR DS:[EAX + 0xA4], 0
      }
      break;

	  // Lord Pentium
   case ITEM2(11, 82):
      __asm
      {
         Mov Ecx, DWord Ptr Ss:[Ebp + 0xC]
         Mov DWord Ptr Ds:[Ecx + 0x9C], 0x3F19999A
         Mov Edx, DWord Ptr Ss:[Ebp + 0xC]
         Mov DWord Ptr Ds:[Edx + 0xA0], 0x3ECCCCCD
         Mov Eax, DWord Ptr Ss:[Ebp + 0xC]
         Mov DWord Ptr Ds:[Eax + 0xA4], 0
      }
      break;

	  // Spartan 
   case ITEM2(11, 83):
      __asm
      {
          MOV ECX, DWORD PTR SS:[EBP + 0xC]
         MOV DWORD PTR DS:[ECX + 0x9C], 0
         MOV EDX, DWORD PTR SS:[EBP + 0xC]
         MOV DWORD PTR DS:[EDX + 0xA0], 0x3ECCCCCD
         MOV EAX, DWORD PTR SS:[EBP + 0xC]
         MOV DWORD PTR DS:[EAX + 0xA4], 0
      }
      break;

	   // Lord Rimbros
   case ITEM2(11, 84):
      __asm
      {
         Mov Ecx, DWord Ptr Ss:[Ebp + 0xC]
         Mov DWord Ptr Ds:[Ecx + 0x9C], 0x3F19999A
         Mov Edx, DWord Ptr Ss:[Ebp + 0xC]
         Mov DWord Ptr Ds:[Edx + 0xA0], 0x3ECCCCCD
         Mov Eax, DWord Ptr Ss:[Ebp + 0xC]
         Mov DWord Ptr Ds:[Eax + 0xA4], 0
      }
      break;

	   // NightMare
   case ITEM2(11, 85):
      __asm
      {
         Mov Ecx, DWord Ptr Ss:[Ebp + 0xC]
         Mov DWord Ptr Ds:[Ecx + 0x9C], 0x3F19999A
         Mov Edx, DWord Ptr Ss:[Ebp + 0xC]
         Mov DWord Ptr Ds:[Edx + 0xA0], 0x3ECCCCCD
         Mov Eax, DWord Ptr Ss:[Ebp + 0xC]
         Mov DWord Ptr Ds:[Eax + 0xA4], 0
      }
      break;

	  // Awakening Soul Magic Lord
   case ITEM2(11, 86):
      __asm
      {
          MOV ECX, DWORD PTR SS:[EBP + 0xC]
         MOV DWORD PTR DS:[ECX + 0x9C], 0x3f800000
         MOV EDX, DWORD PTR SS:[EBP + 0xC]
         MOV DWORD PTR DS:[EDX + 0xA0], 0
         MOV EAX, DWORD PTR SS:[EBP + 0xC]
         MOV DWORD PTR DS:[EAX + 0xA4], 0
      }
      break;

	  // Awakening Soul Fairy
   case ITEM2(11, 87):
      __asm
      {
          MOV ECX, DWORD PTR SS:[EBP + 0xC]
         MOV DWORD PTR DS:[ECX + 0x9C], 0x3f800000
         MOV EDX, DWORD PTR SS:[EBP + 0xC]
         MOV DWORD PTR DS:[EDX + 0xA0], 0
         MOV EAX, DWORD PTR SS:[EBP + 0xC]
         MOV DWORD PTR DS:[EAX + 0xA4], 0
      }
      break;

	  // StormWing
   case ITEM2(11, 89):
      __asm
      {
         Mov Ecx, DWord Ptr Ss:[Ebp + 0xC]
         Mov DWord Ptr Ds:[Ecx + 0x9C], 0x3F19999A
         Mov Edx, DWord Ptr Ss:[Ebp + 0xC]
         Mov DWord Ptr Ds:[Edx + 0xA0], 0x3ECCCCCD
         Mov Eax, DWord Ptr Ss:[Ebp + 0xC]
         Mov DWord Ptr Ds:[Eax + 0xA4], 0
      }
      break;

	   // Holy Angel kNight
   case ITEM2(11, 90):
      __asm
      {
         Mov Ecx, DWord Ptr Ss:[Ebp + 0xC]
         Mov DWord Ptr Ds:[Ecx + 0x9C], 0x3F19999A
         Mov Edx, DWord Ptr Ss:[Ebp + 0xC]
         Mov DWord Ptr Ds:[Edx + 0xA0], 0x3ECCCCCD
         Mov Eax, DWord Ptr Ss:[Ebp + 0xC]
         Mov DWord Ptr Ds:[Eax + 0xA4], 0
      }
      break;

	   // Magic kNight
   case ITEM2(11, 91):
      __asm
      {
         Mov Ecx, DWord Ptr Ss:[Ebp + 0xC]
         Mov DWord Ptr Ds:[Ecx + 0x9C], 0x3F19999A
         Mov Edx, DWord Ptr Ss:[Ebp + 0xC]
         Mov DWord Ptr Ds:[Edx + 0xA0], 0x3ECCCCCD
         Mov Eax, DWord Ptr Ss:[Ebp + 0xC]
         Mov DWord Ptr Ds:[Eax + 0xA4], 0
      }
      break;

	   // BloodThirsty
   case ITEM2(11, 92):
      __asm
      {
         MOV ECX, DWORD PTR SS:[EBP + 0xC]
         MOV DWORD PTR DS:[ECX + 0x9C], 0
         MOV EDX, DWORD PTR SS:[EBP + 0xC]
         MOV DWORD PTR DS:[EDX + 0xA0], 0x3ECCCCCD
         MOV EAX, DWORD PTR SS:[EBP + 0xC]
         MOV DWORD PTR DS:[EAX + 0xA4], 0
      }
      break;

	   // Dark Angel Knight
   case ITEM2(11, 93):
      __asm
      {
         Mov Ecx, DWord Ptr Ss:[Ebp + 0xC]
         Mov DWord Ptr Ds:[Ecx + 0x9C], 0x3F19999A
         Mov Edx, DWord Ptr Ss:[Ebp + 0xC]
         Mov DWord Ptr Ds:[Edx + 0xA0], 0x3ECCCCCD
         Mov Eax, DWord Ptr Ss:[Ebp + 0xC]
         Mov DWord Ptr Ds:[Eax + 0xA4], 0
      }
      break;

	  // Imperion Dragon
   case ITEM2(11, 94):
      __asm
      {
         MOV ECX, DWORD PTR SS:[EBP + 0xC]
         MOV DWORD PTR DS:[ECX + 0x9C], 0x3f800000
         MOV EDX, DWORD PTR SS:[EBP + 0xC]
         MOV DWORD PTR DS:[EDX + 0xA0], 0
         MOV EAX, DWORD PTR SS:[EBP + 0xC]
         MOV DWORD PTR DS:[EAX + 0xA4], 0
      }
      break;

	  // Dark Angel Lord
   case ITEM2(11, 95):
      __asm
      {
         Mov Ecx, DWord Ptr Ss:[Ebp + 0xC]
         Mov DWord Ptr Ds:[Ecx + 0x9C], 0x3F19999A
         Mov Edx, DWord Ptr Ss:[Ebp + 0xC]
         Mov DWord Ptr Ds:[Edx + 0xA0], 0x3ECCCCCD
         Mov Eax, DWord Ptr Ss:[Ebp + 0xC]
         Mov DWord Ptr Ds:[Eax + 0xA4], 0
      }
      break;

	  // Dark Angel Magic
   case ITEM2(11, 96):
      __asm
      {
         Mov Ecx, DWord Ptr Ss:[Ebp + 0xC]
         Mov DWord Ptr Ds:[Ecx + 0x9C], 0x3F19999A
         Mov Edx, DWord Ptr Ss:[Ebp + 0xC]
         Mov DWord Ptr Ds:[Edx + 0xA0], 0x3ECCCCCD
         Mov Eax, DWord Ptr Ss:[Ebp + 0xC]
         Mov DWord Ptr Ds:[Eax + 0xA4], 0
      }
      break;

	  // Dark Angel Fairy
   case ITEM2(11, 97):
      __asm
      {
         Mov Ecx, DWord Ptr Ss:[Ebp + 0xC]
         Mov DWord Ptr Ds:[Ecx + 0x9C], 0x3F19999A
         Mov Edx, DWord Ptr Ss:[Ebp + 0xC]
         Mov DWord Ptr Ds:[Edx + 0xA0], 0x3ECCCCCD
         Mov Eax, DWord Ptr Ss:[Ebp + 0xC]
         Mov DWord Ptr Ds:[Eax + 0xA4], 0
      }
      break;

	  // Holy Angel Magic Lord
   case ITEM2(11, 98):
      __asm
      {
         Mov Ecx, DWord Ptr Ss:[Ebp + 0xC]
         Mov DWord Ptr Ds:[Ecx + 0x9C], 0x3F19999A
         Mov Edx, DWord Ptr Ss:[Ebp + 0xC]
         Mov DWord Ptr Ds:[Edx + 0xA0], 0x3ECCCCCD
         Mov Eax, DWord Ptr Ss:[Ebp + 0xC]
         Mov DWord Ptr Ds:[Eax + 0xA4], 0
      }
      break;

	  // Holy Angel Fairy
   case ITEM2(11, 99):
      __asm
      {
         Mov Ecx, DWord Ptr Ss:[Ebp + 0xC]
         Mov DWord Ptr Ds:[Ecx + 0x9C], 0x3F19999A
         Mov Edx, DWord Ptr Ss:[Ebp + 0xC]
         Mov DWord Ptr Ds:[Edx + 0xA0], 0x3ECCCCCD
         Mov Eax, DWord Ptr Ss:[Ebp + 0xC]
         Mov DWord Ptr Ds:[Eax + 0xA4], 0
      }
      break;

	  // Warrior Gold
   case ITEM2(11, 100):
      __asm
      {
         Mov Ecx, DWord Ptr Ss:[Ebp + 0xC]
         Mov DWord Ptr Ds:[Ecx + 0x9C], 0x3F19999A
         Mov Edx, DWord Ptr Ss:[Ebp + 0xC]
         Mov DWord Ptr Ds:[Edx + 0xA0], 0x3ECCCCCD
         Mov Eax, DWord Ptr Ss:[Ebp + 0xC]
         Mov DWord Ptr Ds:[Eax + 0xA4], 0
      }
      break;

	  // Imperion Black Dragon
   case ITEM2(11, 101):
      __asm
      {
         MOV ECX, DWORD PTR SS:[EBP + 0xC]
         MOV DWORD PTR DS:[ECX + 0x9C], 0x3f800000
         MOV EDX, DWORD PTR SS:[EBP + 0xC]
         MOV DWORD PTR DS:[EDX + 0xA0], 0
         MOV EAX, DWORD PTR SS:[EBP + 0xC]
         MOV DWORD PTR DS:[EAX + 0xA4], 0
      }
      break;

	  // Shimmering
   case ITEM2(11, 102):
      __asm
      {
         Mov Ecx, DWord Ptr Ss:[Ebp + 0xC]
         Mov DWord Ptr Ds:[Ecx + 0x9C], 0x3F19999A
         Mov Edx, DWord Ptr Ss:[Ebp + 0xC]
         Mov DWord Ptr Ds:[Edx + 0xA0], 0x3ECCCCCD
         Mov Eax, DWord Ptr Ss:[Ebp + 0xC]
         Mov DWord Ptr Ds:[Eax + 0xA4], 0
      }
      break;

	  // Bone
   case ITEM2(11, 4):
      __asm
      {
         Mov Ecx, DWord Ptr Ss:[Ebp + 0xC]
         Mov DWord Ptr Ds:[Ecx + 0x9C], 0x3F266666
         Mov Edx, DWord Ptr Ss:[Ebp + 0xC]
         Mov DWord Ptr Ds:[Edx + 0xA0], 0x3F266666
         Mov Eax, DWord Ptr Ss:[Ebp + 0xC]
         Mov DWord Ptr Ds:[Eax + 0xA4], 0x3F266666
      }
      break;

	  // Sphinx
   case ITEM2(11, 7):
      __asm
      {
         Mov Ecx, DWord Ptr Ss:[Ebp + 0xC]
         Mov DWord Ptr Ds:[Ecx + 0x9C], 0x3F19999A
         Mov Edx, DWord Ptr Ss:[Ebp + 0xC]
         Mov DWord Ptr Ds:[Edx + 0xA0], 0x3ECCCCCD
         Mov Eax, DWord Ptr Ss:[Ebp + 0xC]
         Mov DWord Ptr Ds:[Eax + 0xA4], 0
      }
      break;

	  // Brass
   case ITEM2(11, 8):
      __asm
      {
         Mov Ecx, DWord Ptr Ss:[Ebp + 0xC]
         Mov DWord Ptr Ds:[Ecx + 0x9C], 0x3F19999A
         Mov Edx, DWord Ptr Ss:[Ebp + 0xC]
         Mov DWord Ptr Ds:[Edx + 0xA0], 0x3ECCCCCD
         Mov Eax, DWord Ptr Ss:[Ebp + 0xC]
         Mov DWord Ptr Ds:[Eax + 0xA4], 0
      }
      break;

	  // Guardian
   case ITEM2(11, 14):
      __asm
      {
         Mov Ecx, DWord Ptr Ss:[Ebp + 0xC]
         Mov DWord Ptr Ds:[Ecx + 0x9C], 0x3F266666
         Mov Edx, DWord Ptr Ss:[Ebp + 0xC]
         Mov DWord Ptr Ds:[Edx + 0xA0], 0x3F266666
         Mov Eax, DWord Ptr Ss:[Ebp + 0xC]
         Mov DWord Ptr Ds:[Eax + 0xA4], 0x3F266666
      }
      break;

	  // Storm Crow
   case ITEM2(11, 15):
      __asm
      {
         Mov Ecx, DWord Ptr Ss:[Ebp + 0xC]
         Mov DWord Ptr Ds:[Ecx + 0x9C], 0x3F266666
         Mov Edx, DWord Ptr Ss:[Ebp + 0xC]
         Mov DWord Ptr Ds:[Edx + 0xA0], 0x3F266666
         Mov Eax, DWord Ptr Ss:[Ebp + 0xC]
         Mov DWord Ptr Ds:[Eax + 0xA4], 0x3F266666
      }
      break;

	  // Black Dragon
   case ITEM2(11, 16):
      __asm
      {
         Mov Ecx, DWord Ptr Ss:[Ebp + 0xC]
         Mov DWord Ptr Ds:[Ecx + 0x9C], 0x3F266666
         Mov Edx, DWord Ptr Ss:[Ebp + 0xC]
         Mov DWord Ptr Ds:[Edx + 0xA0], 0x3E99999A
         Mov Eax, DWord Ptr Ss:[Ebp + 0xC]
         Mov DWord Ptr Ds:[Eax + 0xA4], 0x3DCCCCCD
      }
      break;

	  // Grand Soul
   case ITEM2(11, 18):
      __asm
      {
         Mov Ecx, DWord Ptr Ss:[Ebp + 0xC]
         Mov DWord Ptr Ds:[Ecx + 0x9C], 0x3F266666
         Mov Edx, DWord Ptr Ss:[Ebp + 0xC]
         Mov DWord Ptr Ds:[Edx + 0xA0], 0x3F266666
         Mov Eax, DWord Ptr Ss:[Ebp + 0xC]
         Mov DWord Ptr Ds:[Eax + 0xA4], 0x3F266666
      }
      break;

	  // Thunder Hawk
   case ITEM2(11, 20):
      __asm
      {
         Mov Ecx, DWord Ptr Ss:[Ebp + 0xC]
         Mov DWord Ptr Ds:[Ecx + 0x9C], 0x3F000000
         Mov Edx, DWord Ptr Ss:[Ebp + 0xC]
         Mov DWord Ptr Ds:[Edx + 0xA0], 0x3E75C28F
         Mov Eax, DWord Ptr Ss:[Ebp + 0xC]
         Mov DWord Ptr Ds:[Eax + 0xA4], 0x3F4CCCCD
      }
      break;

	  // Dark Soul
   case ITEM2(11, 22):
      __asm
      {
         Mov Ecx, DWord Ptr Ss:[Ebp + 0xC]
         Mov DWord Ptr Ds:[Ecx + 0x9C], 0x3F266666
         Mov Edx, DWord Ptr Ss:[Ebp + 0xC]
         Mov DWord Ptr Ds:[Edx + 0xA0], 0x3E99999A
         Mov Eax, DWord Ptr Ss:[Ebp + 0xC]
         Mov DWord Ptr Ds:[Eax + 0xA4], 0x3DCCCCCD
      }
      break;

	  // Hurricane
   case ITEM2(11, 23):
      __asm
      {
         Mov Ecx, DWord Ptr Ss:[Ebp + 0xC]
         Mov DWord Ptr Ds:[Ecx + 0x9C], 0x3F000000
         Mov Edx, DWord Ptr Ss:[Ebp + 0xC]
         Mov DWord Ptr Ds:[Edx + 0xA0], 0x3E75C28F
         Mov Eax, DWord Ptr Ss:[Ebp + 0xC]
         Mov DWord Ptr Ds:[Eax + 0xA4], 0x3F4CCCCD
      }
      break;

	  // Adamantine
   case ITEM2(11, 26):
      __asm
      {
         MOV ECX, DWORD PTR SS:[EBP + 0xC]
         MOV DWORD PTR DS:[ECX + 0x9C], 0
         MOV EDX, DWORD PTR SS:[EBP + 0xC]
         MOV DWORD PTR DS:[EDX + 0xA0], 0x3ECCCCCD
         MOV EAX, DWORD PTR SS:[EBP + 0xC]
         MOV DWORD PTR DS:[EAX + 0xA4], 0
      }
      break;

	  // Dark Steel set de dl
   case ITEM2(11, 27):
      __asm
      {
         Mov Ecx, DWord Ptr Ss:[Ebp + 0xC]
         Mov DWord Ptr Ds:[Ecx + 0x9C], 0x3F266666
         Mov Edx, DWord Ptr Ss:[Ebp + 0xC]
         Mov DWord Ptr Ds:[Edx + 0xA0], 0x3E99999A
         Mov Eax, DWord Ptr Ss:[Ebp + 0xC]
         Mov DWord Ptr Ds:[Eax + 0xA4], 0x3DCCCCCD
      }
      break;

	  // ashCrow set de bk
   case ITEM2(11, 34):
      __asm
      {
         Mov Ecx, DWord Ptr Ss:[Ebp + 0xC]
         Mov DWord Ptr Ds:[Ecx + 0x9C], 0x3F266666
         Mov Edx, DWord Ptr Ss:[Ebp + 0xC]
         Mov DWord Ptr Ds:[Edx + 0xA0], 0x3F266666
         Mov Eax, DWord Ptr Ss:[Ebp + 0xC]
         Mov DWord Ptr Ds:[Eax + 0xA4], 0x3F266666
      }
      break;

	  // Eclipse
   case ITEM2(11, 35):
      __asm
      {
         Mov Ecx, DWord Ptr Ss:[Ebp + 0xC]
         Mov DWord Ptr Ds:[Ecx + 0x9C], 0x3F266666
         Mov Edx, DWord Ptr Ss:[Ebp + 0xC]
         Mov DWord Ptr Ds:[Edx + 0xA0], 0x3F266666
         Mov Eax, DWord Ptr Ss:[Ebp + 0xC]
         Mov DWord Ptr Ds:[Eax + 0xA4], 0x3F266666
      }
      break;

	   // Valiant
   case ITEM2(11, 37):
      __asm
      {
         Mov Ecx, DWord Ptr Ss:[Ebp + 0xC]
         Mov DWord Ptr Ds:[Ecx + 0x9C], 0x3F266666
         Mov Edx, DWord Ptr Ss:[Ebp + 0xC]
         Mov DWord Ptr Ds:[Edx + 0xA0], 0x3F266666
         Mov Eax, DWord Ptr Ss:[Ebp + 0xC]
         Mov DWord Ptr Ds:[Eax + 0xA4], 0x3F266666
      }
      break;

	  // Titan
   case ITEM2(11, 45):
      __asm
      {
         Mov Ecx, DWord Ptr Ss:[Ebp + 0xC]
         Mov DWord Ptr Ds:[Ecx + 0x9C], 0x3F266666
         Mov Edx, DWord Ptr Ss:[Ebp + 0xC]
         Mov DWord Ptr Ds:[Edx + 0xA0], 0x3F266666
         Mov Eax, DWord Ptr Ss:[Ebp + 0xC]
         Mov DWord Ptr Ds:[Eax + 0xA4], 0x3F266666
      }
      break;
	  
	  // Phantom
   case ITEM2(11, 47):
      __asm
      {
         Mov Ecx, DWord Ptr Ss:[Ebp + 0xC]
         Mov DWord Ptr Ds:[Ecx + 0x9C], 0x3F000000
         Mov Edx, DWord Ptr Ss:[Ebp + 0xC]
         Mov DWord Ptr Ds:[Edx + 0xA0], 0x3E75C28F
         Mov Eax, DWord Ptr Ss:[Ebp + 0xC]
         Mov DWord Ptr Ds:[Eax + 0xA4], 0x3F4CCCCD
      }
      break;

	  // Destroyer
   case ITEM2(11, 48):
      __asm
      {
         MOV ECX, DWORD PTR SS:[EBP + 0xC]
         MOV DWORD PTR DS:[ECX + 0x9C], 0x3f800000
         MOV EDX, DWORD PTR SS:[EBP + 0xC]
         MOV DWORD PTR DS:[EDX + 0xA0], 0
         MOV EAX, DWORD PTR SS:[EBP + 0xC]
         MOV DWORD PTR DS:[EAX + 0xA4], 0
      }
      break;

	   // Hades
   case ITEM2(11, 52):
      __asm
      {
         Mov Ecx, DWord Ptr Ss:[Ebp + 0xC]
         Mov DWord Ptr Ds:[Ecx + 0x9C], 0x3F266666
         Mov Edx, DWord Ptr Ss:[Ebp + 0xC]
         Mov DWord Ptr Ds:[Edx + 0xA0], 0x3F266666
         Mov Eax, DWord Ptr Ss:[Ebp + 0xC]
         Mov DWord Ptr Ds:[Eax + 0xA4], 0x3F266666
      }
      break;

	  // Atalns Luky
   case ITEM2(11, 71):
      __asm
      {
         Mov Ecx, DWord Ptr Ss:[Ebp + 0xC]
         Mov DWord Ptr Ds:[Ecx + 0x9C], 0x3F266666
         Mov Edx, DWord Ptr Ss:[Ebp + 0xC]
         Mov DWord Ptr Ds:[Edx + 0xA0], 0x3E99999A
         Mov Eax, DWord Ptr Ss:[Ebp + 0xC]
         Mov DWord Ptr Ds:[Eax + 0xA4], 0x3DCCCCCD
      }
      break;

	  // Hell Knight
   case ITEM2(11, 88):
      __asm
      {
         MOV ECX, DWORD PTR SS:[EBP + 0xC]
         MOV DWORD PTR DS:[ECX + 0x9C], 0x3f800000
         MOV EDX, DWORD PTR SS:[EBP + 0xC]
         MOV DWORD PTR DS:[EDX + 0xA0], 0
         MOV EAX, DWORD PTR SS:[EBP + 0xC]
         MOV DWORD PTR DS:[EAX + 0xA4], 0
      }
      break;

   }

   __asm
   {
      Mov Esi, HDK_NEXT_ITEM_COLOR
      JMP Esi
}
}
void AttachNewEffect()
{
DWORD dwPotect;


dwPotect = ToolKit.UnProtect(HDK_SET_ITEM_EFFECT, 11); //12
ToolKit.SetNop(HDK_SET_ITEM_EFFECT, 11);//12
ToolKit.WriteJmp(HDK_SET_ITEM_EFFECT, (DWORD)&SetItemEffect);
ToolKit.Protect(HDK_SET_ITEM_EFFECT, 21, dwPotect); //22


dwPotect = ToolKit.UnProtect(HDK_SET_COLOR_EFFECT, 30);//46
ToolKit.SetNop(HDK_SET_COLOR_EFFECT, 30); //46
ToolKit.WriteJmp(HDK_SET_COLOR_EFFECT, (DWORD)&SetColorEffect);
ToolKit.Protect(HDK_SET_COLOR_EFFECT, 45, dwPotect); //56
}