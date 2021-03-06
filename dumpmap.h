/*
	Wad2Map v1.0
	(c) 2000 Ted Mielczarek
	
    This program is free software; you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation; either version 2 of the License, or
    (at your option) any later version.

    This program is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with this program; if not, write to the Free Software
    Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA

    You can contact the author of this program at ted@mielczarek.org
*/
/*
	dumpmap.h

	Ted Mielczarek
	1-11-2000

	This file contains prototypes for dumpmap.cpp, for outputting
	to a .map file.
*/
#ifndef __DUMPMAP_H_
#define __DUMPMAP_H_

void DumpMap(char *mapname, level_t *l, poly_t *ss, poly_t *world, int nWorld);
void OutputPlane(FILE *f,point3d_t p[], const char *tex);
void OutputSealBrushes(FILE *f, level_t *l, int z_max, int z_min);
void WriteZPlane(FILE *f, int z, bool dir);
void WriteXPlane(FILE *f, int x, bool dir);
void WriteYPlane(FILE *f, int y, bool dir);
#endif /* __DUMPMAP_H_ */
