;Calendar Style 

[Rainmeter]
BackgroundMode=2
SolidColor=0,0,0,1
MouseOverAction=[!ShowMeterGroup Controls][!Redraw]
MouseLeaveAction=[!HideMeterGroup Controls][!Redraw]

;===== Meter Styles=====


;[BG]
Meter=Shape
Shape=Rectangle (#size#*0.5),(#size#*0.5),(#size#*210),(#size#*190) | Fill Color 0,0,0,120 | StrokeWidth (#size#*1) | Stroke Color 0,0,0,1
X=0
y=0


;All of these meter styles are required.

;Day Label Styles
[LblTxtSty]
H=#C.h#
W=#C.w#
X=#Space.X#R
Y=r
FontFace=#FontFace1#
FontColor=#DayLabelColor#
FontSize=(#size#*8)
stringAlign=CenterCenter
AntiAlias=1

[LblTxtStart]
X=(#Bumper.x#+#C.w#/2)
Y=(#Bumper.top#+#C.h#*1.5+#Space.y#)

[LblCurrSty]
;StringStyle=Bold
FontColor=255,255,255
;Main Calendar Styles
[TextStyle]
H=#C.h#
W=#C.w#
X=(#Space.X#+#C.w#)r
Y=r
FontColor=255,255,255,255
FontFace=#FontFace2#
FontSize=(#size#*10)
stringAlign=center
AntiAlias=1

[FirstDay]
Y=(#C.h#/2+#Space.y#)r
X=(#Bumper.x#+#C.w#/2)

[NewWk]
Y=#Space.y#R
X=(#Bumper.x#+#C.w#/2)

[CurrentDay]
;StringStyle=Bold
FontColor=0,0,0,255
[LastWeek]
FontColor=0,0,0,0

[PreviousMonth]
FontColor=255,255,255,100
Hidden=0

[NextMonth]
FontColor=255,255,255,100
Hidden=0


;========== METERS ==========


;These are not required.
[mLabel]
Meter=String
Text=#MonthLabel#
W=(#C.w#*7+#Space.x#*6)
X=((#C.w#*7+#Space.x#*6)/2+#Bumper.x#)
Y=#Bumper.top#-(#size#*22)
H=#C.h#
FontFace=#FontFace2#
FontSize=(#size#*22)
stringAlign=Center
AntiAlias=1
DynamicVariables=1
InlineSetting=GradientColor | 270 | 255,255,255; 0.2 | 255,255,255; 0.7
InlinePattern=.*

;Control Bar
[ControlForward]
Meter=String
MeterStyle=TextStyle
FontFace=Webdings
StringAlign=Left
Text="4"
Y=#Bumper.top#
X=((#C.w#*6+#Space.x#*6)+#Bumper.x#)
LeftMouseUpAction=[!CommandMeasure "Lua" "Move(1)"][!Update]
Group=Controls
Hidden=1

[ControlBack]
Meter=String
MeterStyle=TextStyle|ControlForward
Text="3"
X=#Bumper.x#-(#size#*5)
LeftMouseUpAction=[!CommandMeasure "Lua" "Move(-1)"][!Update]

[ControlHome]
Meter=String
MeterStyle=TextStyle|ControlForward
Text="="
X=(#size#*12)r
LeftMouseUpAction=[!CommandMeasure "Lua" "Move()"][!Update]


