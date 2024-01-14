object HouseForm3: THouseForm3
  Left = 0
  Top = 0
  Caption = 'HouseForm3'
  ClientHeight = 657
  ClientWidth = 1116
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -12
  Font.Name = 'Segoe UI'
  Font.Style = []
  OnResize = FormResize
  TextHeight = 15
  object Next: TButton
    Left = 889
    Top = 504
    Width = 75
    Height = 25
    Caption = 'Next'
    TabOrder = 0
  end
  object Previous: TButton
    Left = 784
    Top = 504
    Width = 75
    Height = 25
    Caption = 'Back'
    TabOrder = 1
    OnClick = PreviousClick
  end
  object Exit: TButton
    Left = 994
    Top = 504
    Width = 75
    Height = 25
    Caption = 'Exit'
    TabOrder = 2
    OnClick = ExitClick
  end
  object Button1: TButton
    Left = 808
    Top = 551
    Width = 25
    Height = 25
    Caption = '1'
    TabOrder = 3
    OnClick = Button1Click
  end
  object Button2: TButton
    Left = 920
    Top = 559
    Width = 25
    Height = 25
    Caption = '2'
    TabOrder = 4
    OnClick = Button2Click
  end
  object Button3: TButton
    Left = 1010
    Top = 551
    Width = 25
    Height = 25
    Caption = '3'
    TabOrder = 5
  end
  object RadioGroup1: TRadioGroup
    Left = 64
    Top = 88
    Width = 337
    Height = 105
    Caption = 'What is your water usage behavior?'
    Items.Strings = (
      'Conserving water always'
      'Conserving water often'
      'Conserving water occasionally'
      'Not concerned about water conservation')
    TabOrder = 6
  end
  object RadioGroup2: TRadioGroup
    Left = 64
    Top = 208
    Width = 337
    Height = 105
    Caption = 'What type of light bulbs do you primarily use in your home?'
    Items.Strings = (
      'LED'
      'CFL'
      'Incandescent'
      'Halogen')
    TabOrder = 7
  end
  object RadioGroup3: TRadioGroup
    Left = 64
    Top = 344
    Width = 337
    Height = 105
    Caption = 'How often do you plant trees or maintain a garden at your home?'
    Items.Strings = (
      'Regularly'
      'Occasionally'
      'Rarely'
      'Never')
    TabOrder = 8
  end
  object RadioGroup4: TRadioGroup
    Left = 64
    Top = 479
    Width = 337
    Height = 105
    Caption = 'What is your overall waste reduction and reuse practice?'
    Items.Strings = (
      'High, I actively reduce and reuse items'
      'Moderate, I try to reduce and reuse when possible'
      'Low, I rarely consider waste reduction and reuse'
      'Negligible, I don'#39't make an effort to reduce or reuse ')
    TabOrder = 9
  end
end
