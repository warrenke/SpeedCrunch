/* This file is part of the SpeedCrunch project
   Copyright (C) 2004-2006 Ariya Hidayat <ariya@kde.org>

   This program is free software; you can redistribute it and/or
   modify it under the terms of the GNU General Public License
   as published by the Free Software Foundation; either version 2
   of the License, or (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program; if not, write to the Free Software
   Foundation, Inc., 59 Temple Place - Suite 330, Boston, MA  02111-1307, USA.
 */

#ifndef ABOUTBOX
#define ABOUTBOX

#include <QDialog>
#include <QFrame>
#include <QSizePolicy>

class QPaintEvent;
class QResizeEvent;

class MarqueeTextPrivate;

class MarqueeText: public QFrame
{
  Q_OBJECT
  
  public:
    MarqueeText( QWidget* parent = 0, const char* name = 0 );
    ~MarqueeText();
    
    void setText( const QString& text );    
    virtual QSizePolicy sizePolicy() const;
    
  protected: 
    void paintEvent( QPaintEvent* );
    void resizeEvent( QResizeEvent* );
    
  private slots:
    void scroll();
    void layout();
    
  private:
    MarqueeTextPrivate *d;
    MarqueeText( const MarqueeText& );
    MarqueeText& operator=( const MarqueeText& );
};

class AboutBox : public QDialog
{
  Q_OBJECT
  
  public:
    AboutBox( QWidget* parent = 0 );
    
  private:
    AboutBox( const AboutBox& );
    AboutBox& operator=( const AboutBox& );
};


#endif // ABOUTBOX



