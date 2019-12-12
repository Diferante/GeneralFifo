/******************************************************************************
 *  Copyright (C) 2019 - Haohua Dong e Diogo Antunes
 *
 *  This file is a part of GeneralFifo.
 *
 *  GeneralFifo is free software: you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License as published by
 *  the Free Software Foundation, either version 3 of the License, or
 *  (at your option) any later version.
 *
 *  GeneralFifo is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License
 *  along with this program.  If not, see <https://www.gnu.org/licenses/>.
 *
 *****************************************************************************/

 #ifndef GENERALFIFO_H_INCLUDED
#define GENERALFIFO_H_INCLUDED

typedef struct _fifo Fifo;

Fifo* initFifo(unsigned int initial_size, unsigned int item_size);
void freeFifo(Fifo*);
int isFifoEmpty(Fifo*);
void queue( Fifo*, void* item);
void dequeue(Fifo*, void* dest);


#endif // GENERALFIFO_H_INCLUDED
