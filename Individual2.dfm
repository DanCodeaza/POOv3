object IndividualForm2: TIndividualForm2
  Left = 0
  Top = 0
  Caption = 'IndividualForm2'
  ClientHeight = 442
  ClientWidth = 628
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -12
  Font.Name = 'Segoe UI'
  Font.Style = []
  TextHeight = 15
  object Exit: TButton
    Left = 545
    Top = 336
    Width = 75
    Height = 25
    Caption = 'Exit'
    TabOrder = 0
    OnClick = ExitClick
  end
  object Next: TButton
    Left = 465
    Top = 336
    Width = 75
    Height = 25
    Caption = 'Next'
    TabOrder = 1
    OnClick = NextClick
  end
  object Previous: TButton
    Left = 384
    Top = 336
    Width = 75
    Height = 25
    Caption = 'Back'
    TabOrder = 2
    OnClick = PreviousClick
  end
  object Button1: TButton
    Left = 434
    Top = 392
    Width = 25
    Height = 25
    Caption = '1'
    TabOrder = 3
    OnClick = Button1Click
  end
  object Button2: TButton
    Left = 474
    Top = 392
    Width = 25
    Height = 25
    Caption = '2'
    TabOrder = 4
  end
  object Button3: TButton
    Left = 515
    Top = 392
    Width = 25
    Height = 25
    Caption = '3'
    TabOrder = 5
    OnClick = Button3Click
  end
end
