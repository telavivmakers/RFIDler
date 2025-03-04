/***************************************************************************
 * A copy of the GNU GPL is appended to this file.                         *
 *                                                                         *
 * This licence is based on the nmap licence, and we express our gratitude *
 * for the work that went into producing it. There is no other connection  *
 * between RFIDler and nmap either expressed or implied.                   *
 *                                                                         *
 ********************** IMPORTANT RFIDler LICENSE TERMS ********************
 *                                                                         *
 *                                                                         *
 * All references to RFIDler herein imply all it's derivatives, namely:    *
 *                                                                         *
 * o RFIDler-LF Standard                                                   *
 * o RFIDler-LF Lite                                                       *
 * o RFIDler-LF Nekkid                                                     *
 *                                                                         *
 *                                                                         *
 * RFIDler is (C) 2013-2014 Aperture Labs Ltd.                             *
 *                                                                         *
 * This program is free software; you may redistribute and/or modify it    *
 * under the terms of the GNU General Public License as published by the   *
 * Free Software Foundation; Version 2 ("GPL"), BUT ONLY WITH ALL OF THE   *
 * CLARIFICATIONS AND EXCEPTIONS DESCRIBED HEREIN.  This guarantees your   *
 * right to use, modify, and redistribute this software under certain      *
 * conditions.  If you wish to embed RFIDler technology into proprietary   *
 * software or hardware, we sell alternative licenses                      *
 * (contact sales@aperturelabs.com).                                       *
 *                                                                         *
 * Note that the GPL places important restrictions on "derivative works",  *
 * yet it does not provide a detailed definition of that term.  To avoid   *
 * misunderstandings, we interpret that term as broadly as copyright law   *
 * allows.  For example, we consider an application to constitute a        *
 * derivative work for the purpose of this license if it does any of the   *
 * following with any software or content covered by this license          *
 * ("Covered Software"):                                                   *
 *                                                                         *
 * o Integrates source code from Covered Software.                         *
 *                                                                         *
 * o Is designed specifically to execute Covered Software and parse the    *
 * results (as opposed to typical shell or execution-menu apps, which will *
 * execute anything you tell them to).                                     *
 *                                                                         *
 * o Includes Covered Software in a proprietary executable installer.  The *
 * installers produced by InstallShield are an example of this.  Including *
 * RFIDler with other software in compressed or archival form does not     *
 * trigger this provision, provided appropriate open source decompression  *
 * or de-archiving software is widely available for no charge.  For the    *
 * purposes of this license, an installer is considered to include Covered *
 * Software even if it actually retrieves a copy of Covered Software from  *
 * another source during runtime (such as by downloading it from the       *
 * Internet).                                                              *
 *                                                                         *
 * o Links (statically or dynamically) to a library which does any of the  *
 * above.                                                                  *
 *                                                                         *
 * o Executes a helper program, module, or script to do any of the above.  *
 *                                                                         *
 * This list is not exclusive, but is meant to clarify our interpretation  *
 * of derived works with some common examples.  Other people may interpret *
 * the plain GPL differently, so we consider this a special exception to   *
 * the GPL that we apply to Covered Software.  Works which meet any of     *
 * these conditions must conform to all of the terms of this license,      *
 * particularly including the GPL Section 3 requirements of providing      *
 * source code and allowing free redistribution of the work as a whole.    *
 *                                                                         *
 * As another special exception to the GPL terms, Aperture Labs Ltd. grants*
 * permission to link the code of this program with any version of the     *
 * OpenSSL library which is distributed under a license identical to that  *
 * listed in the included docs/licenses/OpenSSL.txt file, and distribute   *
 * linked combinations including the two.                                  *
 *                                                                         *
 * Any redistribution of Covered Software, including any derived works,    *
 * must obey and carry forward all of the terms of this license, including *
 * obeying all GPL rules and restrictions.  For example, source code of    *
 * the whole work must be provided and free redistribution must be         *
 * allowed.  All GPL references to "this License", are to be treated as    *
 * including the terms and conditions of this license text as well.        *
 *                                                                         *
 * Because this license imposes special exceptions to the GPL, Covered     *
 * Work may not be combined (even as part of a larger work) with plain GPL *
 * software.  The terms, conditions, and exceptions of this license must   *
 * be included as well.  This license is incompatible with some other open *
 * source licenses as well.  In some cases we can relicense portions of    *
 * RFIDler or grant special permissions to use it in other open source     *
 * software.  Please contact sales@aperturelabs.com with any such requests.*
 * Similarly, we don't incorporate incompatible open source software into  *
 * Covered Software without special permission from the copyright holders. *
 *                                                                         *
 * If you have any questions about the licensing restrictions on using     *
 * RFIDler in other works, are happy to help.  As mentioned above, we also *
 * offer alternative license to integrate RFIDler into proprietary         *
 * applications and appliances.  These contracts have been sold to dozens  *
 * of software vendors, and generally include a perpetual license as well  *
 * as providing for priority support and updates.  They also fund the      *
 * continued development of RFIDler.  Please email sales@aperturelabs.com  *
 * for further information.                                                *
 * If you have received a written license agreement or contract for        *
 * Covered Software stating terms other than these, you may choose to use  *
 * and redistribute Covered Software under those terms instead of these.   *
 *                                                                         *
 * Source is provided to this software because we believe users have a     *
 * right to know exactly what a program is going to do before they run it. *
 * This also allows you to audit the software for security holes (none     *
 * have been found so far).                                                *
 *                                                                         *
 * Source code also allows you to port RFIDler to new platforms, fix bugs, *
 * and add new features.  You are highly encouraged to send your changes   *
 * to the RFIDler mailing list for possible incorporation into the         *
 * main distribution.  By sending these changes to Aperture Labs Ltd. or   *
 * one of the Aperture Labs Ltd. development mailing lists, or checking    *
 * them into the RFIDler source code repository, it is understood (unless  *
 * you specify otherwise) that you are offering the RFIDler Project        *
 * (Aperture Labs Ltd.) the unlimited, non-exclusive right to reuse,       *
 * modify, and relicense the code.  RFIDler will always be available Open  *
 * Source, but this is important because the inability to relicense code   *
 * has caused devastating problems for other Free Software projects (such  *
 * as KDE and NASM).  We also occasionally relicense the code to third     *
 * parties as discussed above. If you wish to specify special license      *
 * conditions of your contributions, just say so when you send them.       *
 *                                                                         *
 * This program is distributed in the hope that it will be useful, but     *
 * WITHOUT ANY WARRANTY; without even the implied warranty of              *
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the RFIDler   *
 * license file for more details (it's in a COPYING file included with     *
 * RFIDler, and also available from                                        *
 *   https://github.com/ApertureLabsLtd/RFIDler/COPYING                    *
 *                                                                         *
 ***************************************************************************/

// Author: Adam Laurie <adam@aperturelabs.com>
// Anssi Kolehmainen contributed Indala64 validate & parity check


// indala functions

#include "HardwareProfile.h"
#include "rfidler.h"
#include "USB/usb.h"
#include "indala.h"
#include "psk.h"

// send indala 64 or 224 bit id
BOOL send_indala_raw(unsigned char *indala)
{
    unsigned char i, j, idblocks, tmp[65];
    static unsigned char bits[257];
    static unsigned long long id[4];

    // check we're not already emulating
    if(mGetLED_Emulate() == mLED_ON)
        return;

    // ensure IDs are left padded with '0'
    memset(tmp, '0', 64);
    tmp[64]= '\0';

    if(strlen(indala) > 16)
    {
        idblocks= 4;
        for(i= 0, j= strlen(indala) - 1 ; i < strlen(indala) ; ++i, --j)
            tmp[63 - i]= indala[j];
    }
    else
    {
        idblocks= 1;
        j= strlen(indala) % 2;
        strcpy(tmp + j, indala);
    }

    // now process up to 256 bits
    for(j= 0 ; j < idblocks ; ++j)
    {
        if(!hextolonglong(&id[j], tmp + j * 16))
                return 0;
        for(i= 0 ; i < 64 ; ++i)
            bits[i + j * 64]= (BYTE) (id[j] >> (63 - i)) & 0x01;
    }

    // skip the extra leading zeros
    if(idblocks == 1)
    {
        i= 0;
        j= 64;
    }
    else
    {
        i= 32;
        j= 224;
    }

    return send_psk1_bin(bits + i, j, RFIDlerConfig.FrameClock, RFIDlerConfig.DataRate, RFIDlerConfig.DataRateSub0, RFIDlerConfig.Repeat);
}

// we currently do a raw select, then check for 101 terminator, parity, & 2 zero bits
BOOL indala64_get_uid(BYTE *response)
{
    //Reading failed
    if (!psk1_raw_get_uid(response) || (strlen(response) != 16))
        return FALSE;

    //Typical Indala64 key
    //0x0000000123456785
    //0b100100011010001010110011110000101
    //                                ^^^- Always ends with 101
    //                              ^^---- Parity bits, total must be odd
    //                            ^^------ Always zero
    //  ^^^^^^^^^^^^^^^^^^^^^^^^^^-------- (Per site) scrambled wiegand-26 data


    //Last three bits should be 101
    //if (response[7] & 0x7 != 5)
    if (response[15] != '5' && response[15] != 'D')
        return FALSE;

    //There should be two zero bits as well
    //if (response[7] & 0x60 != 0)
    if (response[14] != '0' && response[14] != '1' && response[14] != '8' && response[14] != '9')
        return FALSE;


    //Parity check, count bits
    int bits;
    int i, n;
    for (i=0; i<16; i++)
    {
        if (response[i] >= 'a' && response[i] <= 'f')
            n = response[i] - ('a' - 10);
        else if (response[i] >= '0' && response[i] <= '9')
            n = response[i] - '0';
        else if (response[i] >= 'A' && response[i] <= 'F')
            n = response[i] - ('A' - 10);
        else
            return FALSE;
        bits += __builtin_popcount(n);
    }

    if (bits % 2 == 0)
        return FALSE;

    return TRUE;
}

// since we currently don't know how to interpret indala data, just copy
BOOL indala64_hex_to_uid(BYTE *response, BYTE *hex)
{
    if(!strlen(hex))
        return FALSE;

    strcpy(response, hex);
    return TRUE;

}

// since we currently don't know how to interpret indala data, we just do a raw select
BOOL indala224_get_uid(BYTE *response)
{
    return psk1_raw_get_uid(response);
}

// since we currently don't know how to interpret indala data, just copy
BOOL indala224_hex_to_uid(BYTE *response, BYTE *hex)
{
    if(!strlen(hex))
        return FALSE;

    strcpy(response, hex);
    return TRUE;
}
