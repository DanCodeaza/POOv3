object IndividualForm3: TIndividualForm3
  Left = 0
  Top = 0
  Caption = 'IndividualForm3'
  ClientHeight = 442
  ClientWidth = 628
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -12
  Font.Name = 'Segoe UI'
  Font.Style = []
  TextHeight = 15
  object Next: TButton
    Left = 448
    Top = 312
    Width = 75
    Height = 25
    Caption = 'Next'
    TabOrder = 0
    OnClick = NextClick
  end
  object Previous: TButton
    Left = 367
    Top = 312
    Width = 75
    Height = 25
    Caption = 'Back'
    TabOrder = 1
    OnClick = PreviousClick
  end
  object Exit: TButton
    Left = 537
    Top = 312
    Width = 75
    Height = 25
    Caption = 'Exit'
    TabOrder = 2
    OnClick = ExitClick
  end
  object Button1: TButton
    Left = 416
    Top = 360
    Width = 25
    Height = 25
    Caption = '1'
    TabOrder = 3
    OnClick = Button1Click
  end
  object Button2: TButton
    Left = 464
    Top = 360
    Width = 25
    Height = 25
    Caption = '2'
    TabOrder = 4
    OnClick = Button2Click
  end
  object Button3: TButton
    Left = 520
    Top = 360
    Width = 25
    Height = 25
    Caption = '3'
    TabOrder = 5
  end
end
